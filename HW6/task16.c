#include "stdio.h"
/*
Проверка на простоту
	Составить функцию логическую функцию, которая определяет, верно ли, что число простое. Используя функцию решить задачу. int is_prime(int n)

Input format
	Одно целое не отрицательное число.
Output format
	YES или NO
*/

int is_prime(int val){
	if(val < 2){
		printf("NO\n");
		return 0;
	}
	for(int i = 2; i < val; i++){
		if(val % i == 0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}

int main() {
    int val = 0;
    scanf("%d", &val);
    return is_prime(val);
}


