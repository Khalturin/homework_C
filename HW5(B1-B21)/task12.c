#include <stdio.h>
#include <stdint.h>
#include <limits.h>
/*
Наименьшая и наибольшая цифра
	Организовать ввод натурального числа с клавиатуры. Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

Input format
	Целое неотрицательное число
Output format
	Две цифры через пробел. Сначала наименьшая цифра числа, затем наибольшая.

*/

int main() {
    int val = 0, min, max;
    scanf("%d", &val);
	min = max = val % 10;


	for(int i = 0; val > 0; val /= 10, i++){
		int digit = val % 10;
		max = digit > max ? digit : max;
		min = digit < min ? digit : min;
	}
	printf("%d %d\n", min, max);
	
	return 0;
}
