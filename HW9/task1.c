#include "stdio.h"
#include "stdlib.h" 
/*
Сортировка по взрастанию
    Написать только одну функцию, которая сортирует массив по возрастанию. Необходимо реализовать только одну функцию, всю программу составлять не надо.
    Строго согласно прототипу. Имя функции и все аргументы должны быть: void sort_array(int size, int a[]).
    Всю программу загружать не надо, только одну эту функцию. Можно просто закомментировать текст всей программы, кроме данной функции.

Input format
    Функция принимает на вход, первый аргумент - размер массива, второй аргумент - адрес нулевого элемента.
Output format
    Функция ничего не возвращает. Производит сортировку переданного ей массива по возрастанию.
*/

#define ARR_SIZE 20

// int init_arr(int size, int arr[]){
//     for(int i = 0; i < size; i++)
//         scanf("%d", &arr[i]);
// }

int init_arr(int size, int arr[]){
    arr[0] = 20;
    arr[1] = 19;
    arr[2] = 4;
    arr[3] = 3;
    arr[4] = 2;
    arr[5] = 1;
    arr[6] = 18;
    arr[7] = 17;
    arr[8] = 13;
    arr[9] = 12;
    arr[10] = 11;
    arr[11] = 16;
    arr[12] = 15;
    arr[13] = 14;
    arr[14] = 10;
    arr[15] = 9;
    arr[16] = 8;
    arr[17] = 7;
    arr[18] = 6;
    arr[19] = 5;
}

int print_arr(int size, int arr[]){
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

// Пузырьком
void sort_array(int size, int arr[]){ 
    for(int i = size - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[i] < arr[j]){
                swap(&arr[j], &arr[i]);
            }
        }
    }
}

// Быстрая сортировка
// int comp(const void* a, const void* b) { return *(int*)a - *(int*)b; }
// void sort_array2(int size, int arr[]){
//     qsort(arr, size, sizeof(int), comp);
// }

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr(ARR_SIZE, arr);
    
    print_arr(ARR_SIZE, arr);
    sort_array(ARR_SIZE, arr);
    // sort_array2(ARR_SIZE, arr);
    print_arr(ARR_SIZE, arr);
    

	return 0;
}
