#include "stdio.h"
/*
Сумма от 1 до N
    Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

Input format
    Одно целое положительное число N
Output format
    Целое число - сумма чисел от 1 до N
*/

int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main() {
    int val = 0;
    scanf("%d", &val);
    printf("%d\n", sum(val));
	return 0;
}
