#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 5

/*
Наименьшее из пяти чисел
	Ввести пять чисел и найти  наименьшее из них.

Формат входных данных
	Пять целых чисел
Формат результата
	Одно целое число
*/

int main(){
	int val[COUNT_VALUES];
	for(int i = 0; i < COUNT_VALUES; i++)
	scanf("%d", &val[i]);
	int lesser = val[0];

	for(int i = 0; i < COUNT_VALUES; i++){
		lesser = val[i] < lesser ? val[i] : lesser;
	}
	printf("%d\n", lesser);

	return EXIT_SUCCESS;
}
