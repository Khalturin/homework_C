#include <stdio.h>
/*
Все счастливые числа
	Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр

Input format
	Одно натуральное число большее 10
Output format
	Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания. Не превосходящие введенное число.

*/

int main() {
	int val = 0;
	scanf("%d", &val);

	for(int i = 10; i <= val; i++){
		int tmp = i;
		int product = 1;
		int sum = 0;

		while(tmp > 0){
			sum += tmp % 10;
			product *= tmp % 10;
			tmp /= 10;
		}
		if(sum == product)
			printf("%d ", i);
	}
	printf("\n");

	return 0;
}
