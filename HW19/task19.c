#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3

/*
Существует ли треугольник
	Даны стороны треугольника a, b, c. Определить существует ли такой треугольник.

Формат входных данных
	Три целых числа. Стороны треугольника a, b, c.
Формат результата
	YES или NO
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
