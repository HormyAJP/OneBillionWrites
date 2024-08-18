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
#include "weather_stations.h"

#define MYMIN(x,y) (x) < (y) ? (x) : (y)

#define MAX_WEATHER_STATIONS 10000
#define MAX_ROW_SIZE (100 + 1 + 4 + 1)

typedef struct station_data {
    size_t num_indices;
    char** station_names;
    size_t station_indices[MAX_WEATHER_STATIONS];
} station_data;

inline int myrand_wrapper_rand(void) {
    return rand();
}

inline int myrand_wrapper_const(void) {
    return 1;
}

// Change this to use different rand implementations in the
// loops.
inline int myrand(void) {
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
    char** p = weather_stations;
    // TODO: Can I precalc this? Doubt it matters.
    size_t total_stations = 0;
    while (*p) {
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

inline const char* get_random_weather_station(const station_data* data) {
    // TODO: This rand call seems significant
    return data->station_names[data->station_indices[rand() % data->num_indices]];
}

inline void write_random_temperature(char** buffer) {
    int r = myrand();
    if (myrand() > RAND_MAX) {
        *((*buffer)++) = '-';
    }

    if (myrand() > RAND_MAX) {
        *((*buffer)++) = '0' + (myrand() % 10);
    }
    *((*buffer)++) = '0' + (myrand() % 10);
    *((*buffer)++) = '.';
    *((*buffer)++) = '0' + (myrand() % 10);
}

inline void write_line(FILE* outfile, const station_data* data) {
    char BUFFER[MAX_ROW_SIZE];
    char* buffer = BUFFER;
    const char* station_name = get_random_weather_station(data);
    strcpy(buffer, station_name);
    buffer += strlen(station_name);
    *buffer++ = ';';
    write_random_temperature(&buffer);
    *buffer++ = '\n';
    fwrite(BUFFER, 1, buffer - BUFFER, outfile);
}

void write_data(FILE* f, int num_rows, int num_station_names) {
    station_data* data = create_weather_stations(num_station_names);
    for (size_t i = 0; i < num_rows; ++i) {
        if (i % 1000000 == 0) {
            printf("Wrote: %zu lines\n", i);
        }
        write_line(f, data);
    }
    free(data);
}

int main(int argc, char * argv[]) {
    int opt;
    char *optstring = "n:w:o:s:r:";
    
    const char* filename = "output.txt";
    int num_station_names = 100;
    int num_rows = 10000000;
    
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
