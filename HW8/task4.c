#include "stdio.h"
/*
Два максимума
    Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.

Input format
    10 целых чисел через пробел.
Output format
    Сумма двух максимальных элементов.
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

int sum_max(int size, int arr[]){
    int max1 = arr[1];
    int max2 = arr[0]; 
    for(int i = 2; i < size; i++){
        if(arr[i] > max1 || arr[i] > max2){
            if(max2 < max1)
                max2 = max1;
            max1 = arr[i];
            // printf("%d %d \n", max1, max2);
        }
    }
    return max1 + max2;
}

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr(ARR_SIZE, arr);
    // print_arr(ARR_SIZE, arr);
    // номер максимума, максимум, номер минимума, минимум.
    printf("%d \n", sum_max(ARR_SIZE, arr));

	return 0;
}
