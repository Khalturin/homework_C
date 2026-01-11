#ifndef SENSOR_H
#define SENSOR_H

#include <stdio.h>
#include <stdint.h>
#include <string.h>

// #define SIZE 30

/*
 * Структура данных датчика температуры(день, месяц, год, часы, минуты, температура)
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

/*
 * @brief Инициализирует динамический массив заданной ёмкости 
 * @param sa - указатель на внешний экземкляр структуры, куда будут помещены данные
 * @param init_capacity - размер(кол-во элементов) которым будет иницилизирован массив
*/
void init_sensor_arr(sensor_arr * sa, size_t init_capacity);

/*
 * @brief Добавляет новый элемент в динамический массив, при необходимости увеличивает ёмкость в двое 
 * @param sa - указатель на внешний экземкляр структуры, куда будут помещены данные
 * @param s - данные которые будут помещены в sa
*/
void add_to_sensor_arr(sensor_arr * sa, sensor_t s);
// void delete_sensor_data(sensor_data * sd);

/*
 * @brief Переводит численное значение месяца в буквенное
 * @param month_num - номер месяца
 * @return - строка с названием месяца
*/
const char * month_to_str(int month_num);

// Для отладочного вывода
extern uint8_t is_debug;

#endif
