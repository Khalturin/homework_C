#include <unistd.h>

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
    if(argc == 1){
        printf("use: \"sensor -h\" to help\n");
        return 0;
    }

    // for(int i = 0; i < argc; i++)
    //     printf("argc = %d, argv = %s\n", i, argv[i]);

    sensor_arr sa;
    sensor_arr * sensor_array = &sa;
    init_sensor_arr(sensor_array, 2);

    // Параметр a (./prog -a)
    // Параметр со значением  m: (./prog -m 7)
    // Параметр с необязательным значением y:: (./prog -y или ./prog -y 2025)
    int opt = 0;
    while ( (opt = getopt(argc, argv, "hdf:m:y:")) != -1){
        
        switch (opt){
        case 'h':{
            printf("Posible arguments: \n");
            printf("-h to help\n");
            printf("-f specify the data file (example: \"sensor -f filename.csv\"\n");
            printf("-m to get info for month (example: \"sensor -m 7\" - show information for the month of July)\n");
            printf("-y to get info for year (example: \"sensor -y 2025\" - show information for the 2025 year)\n");
            printf("-d show debug information (used only as first param, example: sensor -d -f source_data/temperature_small.csv\n");

            printf("Example use:\n");
            printf("./build/sensor -f source_data/temperature_small.csv -m 7 -y 2021\n");
            return 0;
            break;
        }

        case 'm':{
            int month = 0;
            sscanf(optarg, "%d", &month);
            const char * month_str = month_to_str(month);
            float min = min_month_temp(sensor_array->data, sensor_array->size, month);
            // printf("Min temp in %d: %.1f\n", month, temp);
            float max = max_month_temp(sensor_array->data, sensor_array->size,  month);
            // printf("Max temp in %d: %.1f\n", month, temp);
            float mid = mid_month_temp(sensor_array->data, sensor_array->size,  month);
            // printf("Mid temp in %d: %.1f\n", month, temp);
            printf("=================================\n");
            printf("| Month\t| MIN\t| MID\t| MAX\t|\n");
            printf("| %s\t| %.1f\t| %.1f\t| %.1f\t|\n", month_str, min, mid, max);
            break;
        }

        case 'y':{
            int year = 0;
            sscanf(optarg, "%d", &year);
            float min = min_year_temp(sensor_array->data, sensor_array->size,  year);
            float max = max_year_temp(sensor_array->data, sensor_array->size,  year);
            float mid = mid_year_temp(sensor_array->data, sensor_array->size,  year);
            printf("=================================\n");
            printf("| Year\t| MIN\t| MID\t| MAX\t|\n");
            printf("| %d\t| %.1f\t| %.1f\t| %.1f\t|\n", year, min, mid, max);
            break;
        }

        case 'f':{
            char * file_path = optarg;
            int res = read_file(file_path, sensor_array); // ./build/sensor -f source_data/temperature_small.csv
            if(res != 0){
                printf("read file failure\n");
            }
            break;
        }

        case 'd':{
            is_debug = 1;
            break;
        }

        case '?':
            printf("Error found !\n");
            break;

        default:
            break;
        }
    }
    
    return 0;
}