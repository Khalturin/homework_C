#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3
/*
Сумма трех чисел
	Ввести три числа, найти их сумму.

Формат входных данных
	Три целых числа

Формат результата
	Строка вида %d+%d+%d=%d
*/

int main(){
	int val[COUNT_VALUES];
	scanf("%d %d %d", &val[0], &val[1], &val[2]);
	int sum = 0;
	for(int i = 0; i < COUNT_VALUES; i++)
		sum += val[i];
	printf("%d+%d+%d=%d\n", val[0], val[1], val[2], sum);

	return EXIT_SUCCESS;
}
