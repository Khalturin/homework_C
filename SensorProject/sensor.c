#include "stdlib.h"

#include "common.h"

void AddRecord(sensor_t *info, int number, uint16_t year, uint8_t month, uint8_t day, int8_t t){
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].t = t;
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
            info[i].t);
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
            if(info[i].t > info[j].t)
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

int main(void){
    sensor_t info[SIZE];
    int number = AddInfo(info);
    printHeader("Start");
    print(info, number);
    printHeader("Sort by temperature");
    SortByT(info, number);
    print(info, number);
    printHeader("Sort by date 1");
    SortByData(info, number);
    print(info, number);
    printHeader("Sort by date 2");
    SortByData2(info, number);
    print(info, number);
    printHeader("Quick Sort by date 1");
    qsort(info, number, sizeof(sensor_t), (int(*) (const void *, const void *))Compare);
    print(info, number);
    printHeader("Quick Sort by date 2");
    qsort(info, number, sizeof(sensor_t), Compare2);
    print(info, number);
    return 0;
}