#include "stdio.h"
/*
Максимум и минимум
    Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.

Input format
    10 целых чисел через пробел
Output format
    4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум.
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

int min_arr(int size, int arr[], int *ret_num){
    int min = arr[0];
    *ret_num = 1;
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
            *ret_num = i+1;    
        }
    }
    return min;
}

int max_arr(int size, int arr[], int *ret_num){
    int max = arr[0];
    *ret_num = 1; 
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
            *ret_num = i+1;
        }
    }
    return max;
}

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr(ARR_SIZE, arr);
    int min = 0, max = 0, ret_min_num = 0, ret_max_num = 0; 
    min = min_arr(ARR_SIZE, arr, &ret_min_num);
    max = max_arr(ARR_SIZE, arr, &ret_max_num);
    // print_arr(ARR_SIZE, arr);
    // номер максимума, максимум, номер минимума, минимум.
    printf("%d %d %d %d\n", ret_max_num, max, ret_min_num, min);

	return 0;
}
