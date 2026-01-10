#include "stdlib.h"

#include "sensor.h"
#include "temp_api.h"

uint8_t is_debug = 0;

void AddRecord(sensor_t *info, int number, uint16_t year, uint8_t month, uint8_t day, int8_t t){
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].tempreture = t;
}

int AddInfo(sensor_t *info){
    int counter = 0;
    AddRecord(info, counter++, 2024, 9, 11, 14);
    AddRecord(info, counter++, 2025, 9, 2, 19);
    AddRecord(info, counter++, 2025, 10, 7, 6);
    AddRecord(info, counter++, 2025, 11, 6, -9);
    AddRecord(info, counter++, 2025, 12, 12, -17);
    AddRecord(info, counter++, 2024, 9, 16, 9);
    AddRecord(info, counter++, 2025, 9, 2, 9);
    AddRecord(info, counter++, 2025, 10, 7, -8);
    AddRecord(info, counter++, 2025, 11, 5, -11);
    AddRecord(info, counter++, 2025, 12, 11, -15);
    return counter;
}

void printHeader(char header[]){
    printf("===== %s =====\n", header);
}

void print(sensor_t *info, int number){
    for(int i = 0; i < number; i++)
        printf("%04d-%02d-%02d t = %2d\n", 
            info[i].year,
            info[i].month,
            info[i].day,
            info[i].tempreture);
    printf("==================================================\n");
}

void ChangeIJ(sensor_t info[], int i, int j){
    sensor_t t = info[i];
    info[i] = info[j];
    info[j] = t;
}

// Упорядочить по температуре
void SortByT(sensor_t info[], int n){
    // qsort()
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(info[i].tempreture > info[j].tempreture)
                ChangeIJ(info, i, j);
}

int Compare(sensor_t *a, sensor_t *b){ 
    if(a->year != b->year)
        return a->year - b->year;
    else if(a->month != b->month)
        return a->month - b->month;
    else
        return a->day - b->day;
}

int Compare2(const void *va, const void *vb){ 
    sensor_t *a = (sensor_t*)va;
    sensor_t *b = (sensor_t*)vb;
    if(a->year != b->year)
        return a->year - b->year;
    else if(a->month != b->month)
        return a->month - b->month;
    else
        return a->day - b->day;
}


// Упорядочить по Дате
void SortByData(sensor_t info[], int n){
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(Compare(info + i, info + j) > 0)
                ChangeIJ(info, i, j);
}

uint32_t DateToInt(sensor_t *info){
    return info->year << 16 | info->month << 8 | info->day;
}

// Упорядочить по Дате. Вариант через сложение в одну переменную (см DateToInt)
void SortByData2(sensor_t info[], int n){
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
            if(DateToInt(info + i) <= DateToInt(info + j))
                ChangeIJ(info, i, j);
}

// int main(void){
//     sensor_t info[SIZE];
//     int number = AddInfo(info);
//     printHeader("Start");
//     print(info, number);
//     printHeader("Sort by temperature");
//     SortByT(info, number);
//     print(info, number);
//     printHeader("Sort by date 1");
//     SortByData(info, number);
//     print(info, number);
//     printHeader("Sort by date 2");
//     SortByData2(info, number);
//     print(info, number);
//     printHeader("Quick Sort by date 1");
//     qsort(info, number, sizeof(sensor_t), (int(*) (const void *, const void *))Compare);
//     print(info, number);
//     printHeader("Quick Sort by date 2");
//     qsort(info, number, sizeof(sensor_t), Compare2);
//     print(info, number);
    
//     float temp = min_month_temp(info, SIZE, 10);
//     printf("Min temp in %d: %.1f\n", 10, temp);
//     temp = max_month_temp(info, SIZE, 10);
//     printf("Max temp in %d: %.1f\n", 10, temp);
//     temp = mid_month_temp(info, SIZE, 10);
//     printf("Mid temp in %d: %.1f\n", 10, temp);
//     temp = min_year_temp(info, SIZE, 2025);
//     printf("Min temp in %d: %.1f\n", 2025, temp);
//     temp = max_year_temp(info, SIZE, 2025);
//     printf("Max temp in %d: %.1f\n", 2025, temp);
//     temp = mid_year_temp(info, SIZE, 2025);
//     printf("Mid temp in %d: %f.1\n", 2025, temp);

//     return 0;
// }

void init_sensor_arr(sensor_arr * sa, size_t init_capacity){
    sa->data = malloc(init_capacity * sizeof(sensor_t));
    if (!sa->data) {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }
    sa->size = 0;
    sa->capacity = init_capacity;
}

void add_to_sensor_arr(sensor_arr * sa, sensor_t s){
    if(sa->size >= sa->capacity){
        sa->capacity *= 2;
        sensor_t* new_data = realloc(sa->data, sa->capacity * sizeof(sensor_t));
        if (!new_data) {
            perror("realloc failed");
            exit(EXIT_FAILURE);
        }
        sa->data = new_data;
    }
    sa->data[sa->size] = s;
    sa->size++;
}

const char* month_to_str(int month_num){
    static const char* months[] = {
        "Wrong month", // индекс 0 — для удобства
        "Jan",
        "Feb",
        "March",
        "April",
        "May",
        "June",
        "July",
        "Aug",
        "Sept",
        "Oct",
        "Nov",
        "Dec"
    };
    if (month_num < 1 || month_num > 12) {
        return months[0]; 
    }
    return months[month_num];
}