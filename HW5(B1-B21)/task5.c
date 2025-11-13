#include <stdio.h>

/*
Сумма цифр
	Ввести целое число и найти сумму его цифр.

Input format
	Одно целое число большее или равное нулю.
Output format
	Одно число - сумма цифр
*/

int main() {
    int val = 0, sum = 0;
    scanf("%d", &val);
    
    for(; val > 0; val/=10)
        sum += val%10;
	printf("%d\n", sum);
}
