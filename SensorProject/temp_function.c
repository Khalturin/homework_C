#include "temp_function.h"
#include "stdint.h"

#define MAX_TEMP 9999
#define MIN_TEMP -9999

float mid_month_temp(sensor_t *info, int size, uint8_t month){
    float sumtemp = 0;
    int counter = 0;
    for(int i = 0; i < size; i++)
        if(info[i].month == month){
            sumtemp += info[i].tempreture;
            counter++;
        }

    return sumtemp/(float)counter;
}

float min_month_temp(sensor_t *info, int size, uint8_t month){
    float temp = MAX_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].tempreture < temp && info[i].month == month)
            temp = info[i].tempreture;

    return temp;
}

float max_month_temp(sensor_t *info, int size, uint8_t month){
    float temp = MIN_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].tempreture > temp && info[i].month == month)
            temp = info[i].tempreture;

    return temp;
}

float mid_year_temp(sensor_t *info, int size, uint16_t year){
    float sumtemp = 0;
    int counter = 0;
    for(int i = 0; i < size; i++)
        if(info[i].year == year){
            sumtemp += info[i].tempreture;
            counter++;
        }

    return sumtemp/(float)counter;
}

float min_year_temp(sensor_t *info, int size, uint16_t year){
    float temp = MAX_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].tempreture < temp && info[i].year == year)
            temp = info[i].tempreture;

    return temp;
}

float max_year_temp(sensor_t *info, int size, uint16_t year){
    float temp = MIN_TEMP;
    for(int i = 0; i < size; i++)
        if(info[i].tempreture > temp && info[i].year == year)
            temp = info[i].tempreture;

    return temp;
}

int read_file(char *filename, sensor_arr *arr){
    FILE *f;
    int n;
    sensor_t s;
    f = fopen(filename, "r");
    if(f == NULL){
        printf("Error: Could not open file '%s'.\n", filename);
        perror("Reason"); 
        return 1;
    }
    int cols = 6;
    int line_num = 0;
    if(is_debug)printf("| Year\t| Month\t| Day\t| Hour\t|Minuts\t| Tempreture\t|\n");
    char line[256];
    while( fgets(line, sizeof(line), f) != NULL ){
        line_num++;
        int n = sscanf(line, "%hu;%hhu;%hhu;%hhu;%hhu;%hhd", &s.year, &s.month, &s.day, &s.hour, &s.minuts, &s.tempreture);
        if(n < cols){
            printf("Could not read line: %d, cols: %d\n", line_num, n);
        }else{
            if(is_debug)printf("| %d\t| %d\t| %d\t| %d\t| %d\t| %d\t|\n", s.year, s.month, s.day, s.hour, s.minuts, s.tempreture);
            add_to_sensor_arr(arr, s);
        }
    }
    return 0;
}