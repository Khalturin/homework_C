#include <stdio.h>
#include <stdint.h>
/*
Ровно одна цифра 9
	Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

Input format
	Одно целое число
Output format
	Ответ: YES или NO
*/

int main() {
    int val = 0;
	uint8_t nine_counter = 0;
    scanf("%d", &val);

	for(; val > 0; val /= 10){
		if (val % 10 == 9){
			nine_counter++;
			if(nine_counter > 1){
				printf("NO\n");
				return 0;
			}
		}
	}
	
	nine_counter == 0 ? printf("NO\n") : printf("YES\n");
	
	return 0;
}
