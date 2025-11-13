#include <stdio.h>
#include <stdint.h>
#include <limits.h>
/*
Перевернуть число
	Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

Input format
	Целое неотрицательное число
Output format
	Целое не отрицательное число наоборот
*/

int main() {
    int val = 0, res_val = 0;
    scanf("%d", &val);


	for(int i = 0; val > 0; val /= 10, i++){
		int digit = val % 10;
		res_val *= 10;
		res_val += digit;
	}
	printf("%d\n", res_val);
	
	return 0;
}
