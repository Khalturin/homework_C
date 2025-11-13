#include "stdio.h"

#define EXIT_SUCCESS 0

/*
Квадраты чисел
	Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.

Формат входных данных
	Два целых числа по модулю не больше 100
Формат результата
	Квадраты чисел от a до b.
*/

int main(){
	int valA = 0, valB = 0;
	scanf("%d %d", &valA, &valB);
	for(int i = valA; i <= valB; i++){
		printf("%d ", i*i);
	}
	printf("\n");

	return EXIT_SUCCESS;
}
