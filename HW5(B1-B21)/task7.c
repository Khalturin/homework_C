#include <stdio.h>
#include <stdint.h>
/*
Две одинаковые цифры
	Ввести целое число и определить, верно ли, что в его записи есть  две одинаковые цифры, НЕ обязательно стоящие рядом.

Input format
	Одно целое число
Output format
	Одно слово: YES или NO
*/

int main() {
    int val = 0;
	uint16_t mask = 0;
    scanf("%d", &val);

	for(; val > 0; val /= 10){
		uint16_t bitval = 0;
		bitval = 1 << (val % 10);
		//printf("val: %d\tmask: %X\t bitval: %X\n", (val % 10), mask, bitval);
		if(mask & bitval){
			printf("YES\n");
			return 0;
		}else{
			mask |= bitval;
		}
	}
	printf("NO\n");
	return 0;
}
