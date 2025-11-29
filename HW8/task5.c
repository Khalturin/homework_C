#include "stdio.h"
/*
Сумма положительных элементов
    Считать массив из 10 элементов и посчитать сумму положительных элементов массива.

Input format
    10 целых чисел через пробел
Output format
    Одно целое число - сумма положительных элементов массива
*/

#define ARR_SIZE 10

int init_arr(int size, int arr[]){
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

int print_arr(int size, int arr[]){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int sum_unsign(int size, int arr[]){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr(ARR_SIZE, arr);
    // print_arr(ARR_SIZE, arr);
    // номер максимума, максимум, номер минимума, минимум.
    printf("%d \n", sum_unsign(ARR_SIZE, arr));

	return 0;
}
