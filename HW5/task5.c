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
	int val[COUNT_VALUES];
	scanf("%d %d %d", &val[0], &val[1], &val[2]);
	float sum = 0;
	for(int i = 0; i < COUNT_VALUES; i++){
		sum += val[i];
	}
	printf("%.2f\n", sum/COUNT_VALUES);

	return EXIT_SUCCESS;
}
