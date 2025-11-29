#include "stdio.h"
/*
Среднее арифметическое чисел
    Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.

Input format
    5 целых не нулевых чисел через пробел
Output format
    Одно число в формате "%.3f"
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

float messure_arr(int size, int arr[]){
    float sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return (sum / size);
}

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr(ARR_SIZE, arr);
    // print_arr(ARR_SIZE, arr);
    printf("%.3f\n", messure_arr(ARR_SIZE, arr));

	return 0;
}
