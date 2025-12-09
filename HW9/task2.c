#include "stdio.h"
#include "stdlib.h" 
/*
Четные в начало
    Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])

Input format
    Функцийя принмате на вход целые числа
Output format
    Отсортированный исходный массив
*/

#define ARR_SIZE 20

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

int init_arr2(int size, int arr[]){
    arr[0] = 20;
    arr[1] = 19;
    arr[2] = 18;
    arr[3] = 17;
    arr[4] = 16;
    arr[5] = 15;
    arr[6] = 14;
    arr[7] = 13;
    arr[8] = 12;
    arr[9] = 11;
    arr[10] = 10;
    arr[11] = 9;
    arr[12] = 8;
    arr[13] = 7;
    arr[14] = 6;
    arr[15] = 5;
    arr[16] = 4;
    arr[17] = 3;
    arr[18] = 2;
    arr[19] = 1;
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

void sort_even_odd(int n, int a[]){
    int widx = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            int even_val = a[i];
            for (int j = i; j > widx; --j) {
                a[j] = a[j - 1];
            }
            a[widx] = even_val;
            ++widx;
        }
    }
}

int main() {
    int arr[ARR_SIZE] = {0};
	init_arr2(ARR_SIZE, arr);
    
    print_arr(ARR_SIZE, arr);

    sort_even_odd(ARR_SIZE, arr);

    print_arr(ARR_SIZE, arr);
    

	return 0;
}
