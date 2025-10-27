#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 2

/*
Наибольшее из двух чисел
	Ввести два числа и вывести их в порядке возрастания.

Формат входных данных
	Два целых числа

Формат результата
	Два целых числа
*/

int main(){
	int val[COUNT_VALUES];
	scanf("%d %d", &val[0], &val[1]);
	val[0] < val[1] ? printf("%d %d", val[0], val[1]) : printf("%d %d", val[1], val[0]);

	return EXIT_SUCCESS;
}
