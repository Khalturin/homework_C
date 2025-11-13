#include <stdio.h>
#include <stdint.h>
/*
Все цифры четные
	Ввести целое число и определить, верно ли, что все его цифры четные.

Input format
	Одно целое число
Output format
	YES или NO
*/

int main() {
    int val = 0;
	uint8_t nine_counter = 0;
    scanf("%d", &val);

	for(; val > 0; val /= 10){
		if ((val % 10)%2 != 0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	
	return 0;
}
