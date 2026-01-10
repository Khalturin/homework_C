#ifndef SENSOR_H
#define SENSOR_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE 30

/*
 * Описать структурный тип для представления сбора иноформации с датчика температуры, необхъодимые поля: дата(день, месяц, год) и
 *  температура. Используя этот тип, описать функцию, принимающую на вход массив таких данных и упорядочивающую его по возрастанию
 *  температуры по дате
*/

struct sensor{
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minuts;
    int8_t tempreture; // температура в Цельсиях
};

typedef struct sensor sensor_t;

typedef struct sensor_arr{
    sensor_t * data;
    size_t capacity;
    size_t size;
} sensor_arr;

void print(sensor_t *info, int number);

void init_sensor_arr(sensor_arr * sa, size_t init_capacity);
void add_to_sensor_arr(sensor_arr * sa, sensor_t s);
// void delete_sensor_data(sensor_data * sd);

const char * month_to_str(int month_num);

extern uint8_t is_debug;

#endif
