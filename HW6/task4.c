#include "stdio.h"
/*
Функция по формуле
    Описать функцию вычисления f(x) по формуле:
    f(x)= x*x при -2 ≤ x < 2;
    x*x+4x+5 при x ≥ 2;
    4 при x < -2.
    Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее.

Input format
    Последовательность не нулевых целых чисел, в конце последовательности число 0.
Output format
    Одно целое число
*/

int f(int x){
    if(x >= -2 && x < 2)
        return x*x;
    else if(x >= 2)
        return (x*x + 4*x + 5);
    return 4;
}

int max(int v1, int v2){
    return v1 > v2 ? v1 : v2;
}

int main() {
    int val = 0;
    int res = 0;
    while(1){
	    scanf("%d", &val);
        if(val == 0)
            break;
        val = f(val);
        res = max(val, res);
    }
	printf("%d\n", res);
	return 0;
}
