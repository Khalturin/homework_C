#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3

/*
Above, less, equal
	Ввести два числа. Если первое число больше второго, то программа печатает слово Above. Если первое число меньше второго, то программа печатает слово Less. А если числа равны, программа напечатает сообщение Equal.

Формат входных данных
	Два целых числа
Формат результата
	Одно единственное слово: Above, Less, Equal
*/

int main(){
	int val1, val2;
	scanf("%d %d", &val1, &val2);
	
	printf( val1 > val2 ? "Above\n" : val1 < val2 ? "Less\n" : "Equal\n");

	return EXIT_SUCCESS;
}
