#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 5
/*
Сумма максимума и минимума
	Напечатать сумму максимума и минимума.

Формат входных данных
	Пять целых чисел через пробел
Формат результата
	Одно целое число - сумма максимума и минимума
*/
int main(){
	int val[COUNT_VALUES];
	for(int i = 0; i < COUNT_VALUES; i++)
	scanf("%d", &val[i]);
	int lesser = val[0];
	int bigger = 0;
	for(int i = 0; i < COUNT_VALUES; i++){
		lesser = val[i] < lesser ? val[i] : lesser;
		bigger = val[i] > bigger ? val[i] : bigger;
	}
	printf("%d\n", bigger + lesser);

	return EXIT_SUCCESS;
}
