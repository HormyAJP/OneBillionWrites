//
//  weather_stations.h
//  OneBillionWrites
//
//  Created by Badger on 18/8/2024.
//

#ifndef weather_stations_h
#define weather_stations_h

#include <stdio.h>

#define MAX_STATION_NAME_LENGTH 100
#define NUMBER_OF_NUMBERS 2000
#define NUM_OF_STATIC_WEATHER_STATIONS 413
#define FOUR_CHAR_LIMIT 99
#define FIVE_CHAR_LIMIT 1099

typedef struct name_and_length {
    uint8_t length;
    char name[MAX_STATION_NAME_LENGTH];
} name_and_length;

extern name_and_length static_weather_station_names[];
extern char* static_all_possible_numbers[NUMBER_OF_NUMBERS];

#endif /* weather_stations_h */
