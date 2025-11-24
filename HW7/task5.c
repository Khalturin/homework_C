#include "stdio.h"
/*
В двоичную систему
    Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.

Input format
    Целое не отрицательное число в десятичной системе счисления
Output format
    Целое число в двоичной системе счисления
*/

void to_bin(int n){
    if(n / 2 == 0 ){
        printf("%d", n % 2);
        return;
    }
    to_bin(n / 2);
    printf("%d", n % 2);

    return;
}

int main() {
    int val;
	scanf("%d", &val);
	
    to_bin(val);
	return 0;
}


