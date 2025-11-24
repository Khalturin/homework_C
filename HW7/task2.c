#include "stdio.h"
/*
Сумма чисел от 1 до N
    Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N

Input format
    Одно натуральное число
Output format
    Сумма чисел от 1 до введенного числа
*/

int summ(int n){
    return n == 1 ? 1 : n + summ(n-1);
}

int main() {
    int val;
	scanf("%d", &val);
	val = summ(val);
    printf("%d\n",val);
	return 0;
}


