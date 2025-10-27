#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 5

/*
Наибольшее из пяти чисел
	Ввести пять чисел и найти наибольшее из них.

Формат входных данных
	Пять целых чисел разделенных пробелом

Формат результата
	Одно целое число
*/

int main(){
	int val[COUNT_VALUES];
	for(int i = 0; i < COUNT_VALUES; i++)
	scanf("%d", &val[i]);
	int bigger = 0;
	for(int i = 0; i < COUNT_VALUES; i++){
		bigger = val[i] > bigger ? val[i] : bigger;
	}
	printf("%d\n", bigger);

	return EXIT_SUCCESS;
}
