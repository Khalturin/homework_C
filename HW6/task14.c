#include "stdio.h"
/*
Сумма цифр четна
    Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр – четное число. Используя эту функцию решить задачу.

Input format
    Одно целое не отрицательное число
Output format
    Ответ YES или NO
*/

int sum_digit(int val){
    int sum = 0;
    for(; val > 0; val /= 10){
		int digit = val % 10;
        sum += digit;
	}
    return sum;
}

int main() {
    int val = 0;
    scanf("%d", &val);
	printf("%s\n", sum_digit(val) % 2 == 0 ? "YES" : "NO");
	
	return 0;
}


