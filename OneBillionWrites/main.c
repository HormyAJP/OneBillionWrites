//
//  main.c
//  OneBillionWrites
//
//  Created by Badger on 18/8/2024.
//

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
#define WRITE_BUFFER_SIZE 4096 * 8

typedef struct station_data {
    size_t num_indices;
    name_and_length* station_names;
    size_t station_indices[MAX_WEATHER_STATIONS];
} station_data;

static inline int myrand_wrapper_rand(void) {
    return rand();
}

static inline int myrand_wrapper_const(void) {
    return 1;
}

// Change this to use different rand implementations in the
// loops.
static inline int myrand(void) {
    return myrand_wrapper_const();
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

station_data* create_weather_stations(size_t num_required_stations) {
    name_and_length* p = weather_stations;
    // No need to pre-calc this. It costs almost nothing to do this (relative to everything else)
    size_t total_stations = 0;
    while (p->length) {
        total_stations++;
        p++;
    }

    num_required_stations = MYMIN(num_required_stations, MAX_WEATHER_STATIONS);
    num_required_stations = MYMIN(num_required_stations, total_stations);
    char* indices = calloc(total_stations, sizeof(char));
    memset(indices, 0, total_stations * sizeof(char));
    for (size_t i = 0; i < num_required_stations; ++i) {
        indices[i] = 1;
    }

    station_data* data = malloc(sizeof(station_data));
    data->station_names = weather_stations;
    data->num_indices = num_required_stations;
    size_t* pwrite_index = data->station_indices;

    for (size_t i = 0; i < total_stations; ++i) {
        if (indices[i]) {
            *pwrite_index++ = i;
        }
    }
    free(indices);
    return data;
}

// WARNING: Not threadsafe.
static inline const name_and_length* get_random_weather_station(const station_data* data) {
    // Dirty, but this is technically going to give a uniform distribution of
    // place names when generating a large number of rows.
    static int index = -1;
    index = (index + 1) % data->num_indices;
    return &data->station_names[data->station_indices[index]];
}

static inline void write_random_temperature_and_newline(char** buffer) {
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
    memcpy(*buffer, numbers[index], strsize);
    (*buffer) += strsize;
}

static inline void write_line(FILE* outfile, const station_data* data, char** pbuf) {
    const name_and_length* name_and_length = get_random_weather_station(data);
    // TODO: Similar to memcpy. Can I create a faster version where I don't need to move the buffer?
    strcpy(*pbuf, name_and_length->name); // Copying makes sense as we're managing the fwrite buffer ourselves
    *pbuf += name_and_length->length; // Semi colon is included in station name
    write_random_temperature_and_newline(pbuf);
}

void write_data(FILE* f, int num_rows, int num_station_names) {
    // Switch to unbuffered writes. Buffering is normally good, but in our case
    // this will lead to another copy of memory. Instead, we manually manage
    // the buffer and then call fwrite once we're happy it's full.
    setbuf(f, NULL);
    
    station_data* data = create_weather_stations(num_station_names);
    alignas(4096) char BUFFER[WRITE_BUFFER_SIZE];
    char* pbuf = BUFFER;
    for (size_t i = 0; i < num_rows; ++i) {
        // TODO: Time without the logging. Even this check will be costing us.
//        if (i % 1'000'000 == 0) {
//            printf("Progress: %zu lines\n", i);
//        }
        write_line(f, data, &pbuf);
        size_t buffer_used = (pbuf - BUFFER);
        if (WRITE_BUFFER_SIZE - buffer_used < MAX_ROW_SIZE) {
            fwrite(BUFFER, 1, buffer_used, f);
            pbuf = BUFFER;
        }
    }
    
    free(data);
}

int main(int argc, char * argv[]) {
    int opt;
    char *optstring = "n:w:o:s:r:";
    
    const char* filename = "output.txt";
    int num_station_names = 100;
    int num_rows = 10'000'000;
    
    while ((opt = getopt(argc, argv, optstring)) != -1) {
        switch (opt) {
            case 'n':
                num_rows = atoi(optarg);
                break;
            case 's':
                fprintf(stderr, "-s not implemented (fixes the random seed)");
                break;
            case 'w':
                num_station_names = atoi(optarg);
                break;
            case 'o':
                fprintf(stderr, "-o not implemented (output file)");
                abort();
            case 'r':
                fprintf(stderr, "-r not implemented (randomizes the weather station names to garbage)");
                abort();
            case '?':
                fprintf(stderr, "Usage: TODO\n: %s", argv[0]);
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
    printf("  Num Rows: %d\n", num_rows);
    printf("  Max Stations: %d\n", num_station_names);
    
    srand((unsigned)time(NULL));

    FILE* f = fopen(filename, "w");
    write_data(f, num_rows, num_station_names);
    return 0;
}
