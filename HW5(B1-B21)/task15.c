#include <stdio.h>
/*
Количество четных чисел
	Дана последовательность ненулевых целых чисел, в конце последовательности число 0. Посчитать количество четных чисел.

Input format
	Последовательность ненулевых целых чисел. В конце последовательности число ноль.
Output format
	Одно целое число - количество четных чисел.
*/

int main() {
	int val = -1, even_counter = 0;
	while(val != 0){
		scanf("%d", &val);
		even_counter = val % 2 == 0 ? even_counter+1 : even_counter;
	}
	printf("%d\n", even_counter-1);
	return 0;
}
