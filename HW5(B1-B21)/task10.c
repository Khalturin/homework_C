#include <stdio.h>
#include <stdint.h>
#include <limits.h>
/*
Все цифры в порядке возрастания
	Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.

Input format
	Целое число
Output format
	YES или NO
*/

int main() {
    int val = 0, last_val;
    scanf("%d", &val);
	
	last_val = INT_MAX;

	for(; val > 0; val /= 10){
		int digit = val % 10;
		if (digit >= last_val){
			printf("NO\n");
			return 0;
		}
		last_val = digit;
	}
	printf("YES\n");
	
	return 0;
}
