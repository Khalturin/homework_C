#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 2

/*
Разность двух чисел
	Ввести два числа и найти их разность.

Формат входных данных
	Два целых числа

Формат результата
	Ответ - одно целое число
*/

int main(){
	int val[COUNT_VALUES];
	scanf("%d %d", &val[0], &val[1]);
	printf("%d\n", val[0] - val[1]);

	return EXIT_SUCCESS;
}
