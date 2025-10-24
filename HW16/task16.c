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
	int last = val[0];
	for(int i = 1; i < COUNT_VALUES; i++){
		if(last >= val[i]){
			printf("NO\n");
			return EXIT_SUCCESS;
		}else{
			last = val[i];
		}
	}
	printf("YES\n");

	return EXIT_SUCCESS;
}
