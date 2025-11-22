#include "stdio.h"
#include "stdint.h"
#include "limits.h"
/*
Цифры по возрастанию
    Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу. int grow_up(int n)

Input format
    Одно целое не отрицательное число
Output format
    YES или NO
*/

int grow_up(int val){
    int last_val = INT_MAX;

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

int main() {
    int val = 0;
    scanf("%d", &val);
    return grow_up(val);
}


