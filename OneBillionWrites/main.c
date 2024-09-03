//
//  main.c
//  OneBillionWrites
//
//  Created by Badger on 18/8/2024.
//

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <unistd.h>
#include "static_data.h"

#define MYMIN(x,y) (x) < (y) ? (x) : (y)

#define MAX_WEATHER_STATIONS 10000
#define MAX_ROW_SIZE (100 + 1 + 4 + 1)
// Heuristally this was doing quite well.
#define WRITE_BUFFER_SIZE 4096 * 64

#define USE_UNIFORM_DISTRIBUTIONS 1

static const char VALID_STATION_CHARACTERS[] = {
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'- "
};

typedef struct station_data {
    size_t num_stations;
    name_and_length* station_names;
} station_data;

typedef int (*random_number_generator_t)(void);

static inline int myrand_wrapper_rand(void) {
    return rand();
}

static inline int myrand_wrapper_const(void) {
    return 1;
}

// Change this to use different rand implementations in the tight loops below.
static inline int rand_highperf(void) {
    return myrand_wrapper_rand();
}

static inline int random_int(int min, int max, random_number_generator_t rand_fn) {
    if (!rand_fn) {
        rand_fn = rand;
    }
    return (int)(min + (max - min) * ((float)rand_fn() / RAND_MAX));
}

void test_random_int() {
    for (int i = 0; i < 1000000000; ++i) {
        int x = random_int(0, 10000, rand_highperf);
        assert(x >= 0);
        assert(x <= 10000);
    }
}

void shuffle_indices(char* indices, size_t count) {
    // Do a fischer yates shuffle
    for (size_t i = count - 1; i > 0; --i) {
        int j = rand() % i;
        char temp = indices[i];
        indices[i] = indices[j];
        indices[j] = temp;
    }
}

station_data* create_weather_stations(size_t num_required_stations, int randomize_station_names) {
    station_data* data = malloc(sizeof(station_data));
    data->num_stations = num_required_stations;
    
    if (randomize_station_names) {
        data->station_names = calloc(num_required_stations, sizeof(name_and_length));
        name_and_length* nandl = data->station_names;
        for (size_t i = 0; i < num_required_stations; ++i) {
            nandl->length = random_int(3, MAX_STATION_NAME_LENGTH, rand);
            for (size_t i = 0; i < nandl->length; ++i){
                nandl->name[i] = VALID_STATION_CHARACTERS[random_int(0, sizeof(VALID_STATION_CHARACTERS) - 1, rand)];
            }
            nandl->name[nandl->length] = ';';
            nandl->length++;
            nandl++;
        }
        return data;
    }
    
    // We're not randomizing. So we use the static data in static_weather_station_names.
    // We select a random subset of them by randomly sorting a list of indices into the
    // static_weather_station_names array.
    if (num_required_stations > NUM_OF_STATIC_WEATHER_STATIONS) {
        fprintf(stderr, "Warning: %zu stations requested, but static list only has %d available. If you want more, use the -r option.", num_required_stations, NUM_OF_STATIC_WEATHER_STATIONS);
        num_required_stations = NUM_OF_STATIC_WEATHER_STATIONS;
    }
    
    data->station_names = calloc(num_required_stations, sizeof(name_and_length));
    
    char* indices = calloc(NUM_OF_STATIC_WEATHER_STATIONS, sizeof(char));
    memset(indices, 0, NUM_OF_STATIC_WEATHER_STATIONS * sizeof(char));
    memset(indices, 1, num_required_stations * sizeof(char));
    shuffle_indices(indices, NUM_OF_STATIC_WEATHER_STATIONS);

    name_and_length* nandl = data->station_names;
    for (size_t i = 0; i < NUM_OF_STATIC_WEATHER_STATIONS; ++i) {
        if (indices[i]) {
            *nandl++ = static_weather_station_names[i];
        }
    }
    free(indices);
    return data;
}

void destroy_weather_stations(station_data* data) {
    free(data->station_names);
    free(data);
}

static inline const name_and_length* get_uniform_weather_station(const station_data* data) {
    // Dirty, but this is technically going to give a uniform distribution of
    // place names when generating a large number of rows.
    static int index = -1;
    index = (index + 1) % data->num_stations;
    return &data->station_names[index];
}

static inline const name_and_length* get_random_weather_station(const station_data* data) {
    return &data->station_names[random_int(0, (int)data->num_stations, rand_highperf)];
}

static inline void write_uniform_temperature_and_newline(char** buffer) {
    // Dirty. See above. We can re-add some randonmess but shuffling but the
    // temperatures and place names. Although if we shuffle temps we need to store
    // pairs with the strlen like the name
    static int index = -1;
    index = (index + 1) % NUMBER_OF_NUMBERS;
    size_t strsize = 4;
    if (index > FIVE_CHAR_LIMIT) {
        strsize = 6;
    } else if (index > FOUR_CHAR_LIMIT) {
        strsize = 5;
    }
    // TODO: Can I write a faster implementation here which avoids moving *buffer
    // afterwards? May not make much difference.
    memcpy(*buffer, static_all_possible_numbers[index], strsize);
    (*buffer) += strsize;
}

static inline void write_random_temperature_and_newline(char** buffer) {
    int index = random_int(0, NUMBER_OF_NUMBERS - 1, rand_highperf);
    size_t strsize = 4;
    if (index > FIVE_CHAR_LIMIT) {
        strsize = 6;
    } else if (index > FOUR_CHAR_LIMIT) {
        strsize = 5;
    }
    // TODO: Can I write a faster implementation here which avoids moving *buffer
    // afterwards? May not make much difference.
    memcpy(*buffer, static_all_possible_numbers[index], strsize);
    (*buffer) += strsize;
}

// TODO: Similar to above. Can I create a faster version of memcpy where I don't need to move the buffer?
static inline void write_line(FILE* outfile, const station_data* data, char** pbuf) {
#if USE_UNIFORM_DISTRIBUTIONS
    const name_and_length* name_and_length = get_uniform_weather_station(data);
    memcpy(*pbuf, name_and_length->name, name_and_length->length); // Copying makes sense as we're managing the fwrite buffer ourselves
    *pbuf += name_and_length->length; // Semi colon is included in station name
    write_uniform_temperature_and_newline(pbuf);
#else
    const name_and_length* name_and_length = get_random_weather_station(data);
    memcpy(*pbuf, name_and_length->name, name_and_length->length); // Copying makes sense as we're managing the fwrite buffer ourselves
    *pbuf += name_and_length->length; // Semi colon is included in station name
    write_random_temperature_and_newline(pbuf);
#endif
}

void write_data(FILE* f, station_data* data, int num_rows) {
    // Switch to unbuffered writes. Buffering is normally good, but in our case
    // this will lead to another copy of memory. Instead, we manually manage
    // the buffer and then call fwrite once we're happy it's full.
    setbuf(f, NULL);
    
    alignas(4096) char BUFFER[WRITE_BUFFER_SIZE];
    char* pbuf = BUFFER;
    size_t buffer_used = 0;
    for (size_t i = 0; i < num_rows; ++i) {
        write_line(f, data, &pbuf);
        buffer_used = (pbuf - BUFFER);
        if (WRITE_BUFFER_SIZE - buffer_used < MAX_ROW_SIZE) {
            fwrite(BUFFER, 1, buffer_used, f);
            pbuf = BUFFER;
        }
    }
    // Write any leftovers.
    if (buffer_used)
        fwrite(BUFFER, 1, buffer_used, f);
}

const char* USAGE = \
"Usage:\n"
"    -n NUM_ROWS_TO_WRITE Number of rows to write.\n"
"    -w NUM_STATION_NAMES Number of unique station names to appear in the file.\n"
"    -s SEED Seed for random num generation. Defaults to seeding from time.\n"
"    -o OUTPUT_FILE Output filename. Default is $PWD\\output.txt.\n"
"    -r Randomize station names. Default is to pick station names from a hardcoded list.\n"
"       Enabling this will generate random strings of garbage for station names.\n";

int main(int argc, char * argv[]) {
    srand((unsigned)time(NULL));
    
    int opt;
    char *optstring = "n:w:o:s:r";
    
    const char* filename = "output.txt";
    int num_station_names = 100;
    int randomize_station_names = 0;
    int num_rows = 1'000;
    
    while ((opt = getopt(argc, argv, optstring)) != -1) {
        switch (opt) {
            case 'n':
                num_rows = atoi(optarg);
                break;
            case 's':
                fprintf(stderr, "-s not implemented (fixes the random seed)\n");
                exit(1);
            case 'w':
                num_station_names = atoi(optarg);
                break;
            case 'o':
                fprintf(stderr, "-o not implemented (output file)\n");
                exit(1);
            case 'r':
                randomize_station_names = 1;
                break;
            case '?':
                printf(USAGE, argv[0]);
                return 1;
            default:
                abort();
        }
    }

    // TODO: Bad - fixed buffer size
    char path[1024];
    getcwd(path, sizeof(path));
    strncat(path, "/", 1024 - strlen(path) - 1);
    strncat(path, filename, 1024 - strlen(path) - 2);
    
    printf("Config:\n");
    printf("  Output file: %s\n", path);
    printf("  Num rows: %d\n", num_rows);
    printf("  Max stations: %d\n", num_station_names);
    printf("  Randomize station names: %d\n", randomize_station_names);
    
    station_data* data = create_weather_stations(num_station_names, randomize_station_names);
    
//    printf("Num stations: %zu\n", data->num_stations);
//    for (size_t i = 0; i < data->num_stations; ++i) {
//        char BUFFER[1000] = {0};
//        memcpy(BUFFER, data->station_names[i].name, data->station_names[i].length);
//        printf("%zu: %s\n", i, BUFFER);
//    }

    FILE* f = fopen(filename, "w");
    write_data(f, data, num_rows);
    
    destroy_weather_stations(data);
    return 0;
}


