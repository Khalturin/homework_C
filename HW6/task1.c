#include "stdio.h"
/*
Модуль числа
    Составить функцию, модуль числа и привести пример ее использования.

Input format
    Целое число
Output format
    Целое не отрицательное число
*/

int mod(int val){
    return val < 0 ? -val : val;
}

int main() {
    int val;
	scanf("%d", &val);
	printf("%d", mod(val));
	return 0;
}


