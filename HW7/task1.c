#include "stdio.h"
/*
От 1 до N
    Составить рекурсивную функцию, печать всех чисел от 1 до N

Input format
    Одно натуральное число
Output format
    Последовательность чисел от 1 до введенного числа
*/

int printr(int val, int n){
    printf("%d ", val);
    return val == n ? 0 : printr(++val, n);
}

int main() {
    int val;
	scanf("%d", &val);
	printr(1, val);
	return 0;
}


