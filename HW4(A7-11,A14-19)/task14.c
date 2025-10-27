#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3

/*
Максимальная цифра
	Дано трехзначное число, напечатать макисмальную цифру

Формат входных данных
	Целое положительное трехзначное число
Формат результата
	Одна цифра
*/


int main(){
	int val;
	scanf("%d", &val);
	int values[COUNT_VALUES];
	values[0] = val%1000/100;
	values[1] = val%100/10;
	values[2] = val%10;
	val = values[0]; 
	for(int i = 0; i < COUNT_VALUES; i++){
		val = values[i] > val ? values[i] : val;
	}

	printf("%d\n", val);

	return EXIT_SUCCESS;
}
