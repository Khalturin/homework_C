#include "stdio.h"
/*
Возвести в степень
    Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.

Input format
    Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0
Output format
    Одно целое число
*/

int power(int val, int vpow){
    if(vpow == 0)
        return 1;
    int res = val;
    for(int i = 2; i <= vpow; i++)
        res *= val;
    return res;
}

int main() {
    int val = 0, vpow = 0;
	scanf("%d %d", &val, &vpow);
	printf("%d\n", power(val, vpow));
	return 0;
}
