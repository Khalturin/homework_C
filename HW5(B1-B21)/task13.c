#include <stdio.h>
#include <stdint.h>
#include <limits.h>
/*
Количество четных и нечетных цифр
	Посчитать количество четных и нечетных цифр числа.

Input format
	Одно целое неотрицательное число.
Output format
	Два числа через пробел. Количество четных и нечетных цифр в числе.

*/

int main() {
    int val = 0, odd_counter = 0, even_counter = 0;
    scanf("%d", &val);

	for(int i = 0; val > 0; val /= 10, i++){
		int digit = val % 10;
		digit % 2 == 0 ? even_counter++ : odd_counter++;
	}
	printf("%d %d\n", even_counter, odd_counter);
	
	return 0;
}
