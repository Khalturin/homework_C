#include "stdio.h"
/*
Среднее арифметическое чисел
    Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров). int middle(int a, int b)

Input format
    Два целых не отрицательных числа
Output format
    Одно целое число
*/

int middle(int val1, int val2){
    return (val1 + val2)/2;
}

int main() {
    int val1 = 0, val2 = 0;
	scanf("%d %d", &val1, &val2);
	printf("%d\n", middle(val1, val2));
	return 0;
}
