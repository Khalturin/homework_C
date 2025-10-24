#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3

/*
Среднее арифметическое трех чисел
	Ввести три числа, найти их среднее арифметическое.

Формат входных данных
	Три целых числа

Формат результата
	Вещественное число в формате %.2f
*/

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	if(a + b <= c || a + c <= b || c + b <= a)
		printf("NO\n");
	else
		printf("YES\n");
	
	return EXIT_SUCCESS;
}
