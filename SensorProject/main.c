// #include <unistd.h>

#include "sensor.h"
#include "temp_api.h"

/*  Вывести статистику по каждому месяцу, с учетом исходных данных:
    • среднемесячная температура
    • минимальная температура в текущем месяце
    • максимальная температура в текущем месяце
    Вывести статистику за год:
    • среднегодовая температура
    • минимальная температура
    • максимальная температура

    Ключи командной строки:
    • -h Описание функционала приложения. Список ключей, которые обрабатывает данное приложение и их назначение.
    • -f <ﬁlename.csv> входной файл csv для обработки.

    • -m <номер месяца> если задан данный ключ, то выводится только статистика за указанный месяц.
*/


int main(int argc, char *argv[]){
    for(int i = 0; i < argc; i++)
        printf("argc = %d, argv = %s \n", i, argv[i]);

    // Параметр a (./prog -a)
    // Параметр со значением  m: (./prog -m 7)
    // Параметр с необязательным значением y:: (./prog -y или ./prog -y 2025)
    // getopt();

    sensor_arr *sensor_array;
    init_sensor_arr(sensor_array);
    sensor_t s1 = {2025,7,10,15};
    add_to_sensor_arr(sensor_array, s1);
    s1.day = 11; s1.t = 17;
    add_to_sensor_arr(sensor_array, s1);
    s1.day = 12; s1.t = 16;
    add_to_sensor_arr(sensor_array, s1);
    s1.day = 13; s1.t = 20;
    add_to_sensor_arr(sensor_array, s1);
    s1.day = 14; s1.t = 23;
    add_to_sensor_arr(sensor_array, s1);
    print(sensor_array->data, sensor_array->sp);

    int month = 7;
    int year = 2025;
    float temp = min_month_temp(sensor_array->data, sensor_array->sp, month);
    printf("Min temp in %d: %.1f\n", month, temp);
    temp = max_month_temp(sensor_array->data, sensor_array->sp,  month);
    printf("Max temp in %d: %.1f\n", month, temp);
    temp = mid_month_temp(sensor_array->data, sensor_array->sp,  month);
    printf("Mid temp in %d: %.1f\n", month, temp);
    temp = min_year_temp(sensor_array->data, sensor_array->sp,  year);
    printf("Min temp in %d: %.1f\n", year, temp);
    temp = max_year_temp(sensor_array->data, sensor_array->sp,  year);
    printf("Max temp in %d: %.1f\n", year, temp);
    temp = mid_year_temp(sensor_array->data, sensor_array->sp,  year);
    printf("Mid temp in %d: %.1f\n", year, temp);

    return 0;
}