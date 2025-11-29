#include "stdio.h"
/*
Найти минимум
    Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.

Input format
    5 целых чисел через пробел
Output format
    Одно единственное целое число
Examples
*/

#define ARR_SIZE 5

int init_arr(int size, int arr[]){
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

int print_arr(int size, int arr[]){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int min_arr(int size, int arr[]){
    int min = arr[0];
    for(int i = 1; i < size; i++)
        min = arr[i] < min ? arr[i] : min;
    return min;
}

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr(ARR_SIZE, arr);
    // print_arr(ARR_SIZE, arr);
    printf("%d\n", min_arr(ARR_SIZE, arr));

	return 0;
}
