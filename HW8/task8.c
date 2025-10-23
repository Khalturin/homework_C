#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3

/*
Наибольшее из трех чисел
	Ввести три числа и найти наибольшее из них

Формат входных данных
	Три целых числа через пробел

Формат результата
	Одно наибольшее целое число
*/

int main(){
	int val[COUNT_VALUES];
	scanf("%d %d %d", &val[0], &val[1], &val[2]);
	int bigger = 0;
	for(int i = 0; i < COUNT_VALUES; i++){
		bigger = val[i] > bigger ? val[i] : bigger;
	}
	printf("%d\n", bigger);

	return EXIT_SUCCESS;
}
