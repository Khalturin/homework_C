#include <stdio.h>
/*
Сумма цифр равна 10
	Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.

Input format
	Натуральное число
Output format
	YES или NO
*/

int main() {
	int val = 0, sum = 0;
	scanf("%d", &val);
	for(; val > 0; val /= 10){
		int digit = val % 10;
		sum += digit;
		if(sum > 10){
			printf("NO\n");
			return 0;
		}
	}
	if(sum < 10){
		printf("NO\n");
		return 0;
	}
	printf("YES\n");
	return 0;
}
