#include "stdio.h"
/*
Сумма цифр равна произведению
	Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению. int is_happy_number(int n)

Input format
	Целое не отрицательное число
Output format
	YES или NO
Examples
*/

int is_happy_number(int val){
	for(int i = 10; i <= val; i++){
		int tmp = i;
		int product = 1;
		int sum = 0;

		while(tmp > 0){
			sum += tmp % 10;
			product *= tmp % 10;
			tmp /= 10;
		}

	}
	int product = 1;
	int sum = 0;
	for(; val > 0; val /= 10){
		int digit = val % 10;
		sum += digit % 10;
		product *= digit % 10;
	}
	printf("%s\n", sum == product ? "YES" : "NO");
	return 0;
}
int main() {
    int val = 0;
    scanf("%d", &val);
    return is_happy_number(val);
}


