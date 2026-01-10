#include "temp_api.h"
#include "stdint.h"

#define MAX_TEMP 9999
#define MIN_TEMP -9999

float mid_month_temp(sensor_t *info, int size, uint8_t month){
    float sumtemp = 0;
    int counter = 0;
    for(int i = 0; i < size; i++)
        if(info[i].month == month){
            sumtemp += info[i].t;
            counter++;
        }

    return sumtemp/(float)counter;
}

float min_month_temp(sensor_t *info, int size, uint8_t month){
    float temp = MAX_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].t < temp && info[i].month == month)
            temp = info[i].t;

    return temp;
}

float max_month_temp(sensor_t *info, int size, uint8_t month){
    float temp = MIN_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].t > temp && info[i].month == month)
            temp = info[i].t;

    return temp;
}

float mid_year_temp(sensor_t *info, int size, uint16_t year){
    float sumtemp = 0;
    int counter = 0;
    for(int i = 0; i < size; i++)
        if(info[i].year == year){
            sumtemp += info[i].t;
            counter++;
        }

    return sumtemp/(float)counter;
}

float min_year_temp(sensor_t *info, int size, uint16_t year){
    float temp = MAX_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].t < temp && info[i].year == year)
            temp = info[i].t;

    return temp;
}

float max_year_temp(sensor_t *info, int size, uint16_t year){
    float temp = MIN_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].t > temp && info[i].year == year)
            temp = info[i].t;

    return temp;
}
