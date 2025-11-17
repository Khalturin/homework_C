#include "stdio.h"
#include "stdint.h"
/*
Простые множители
    Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа. void print_simple(int n)

Input format
    Целое положительное число.
Output format
    Последовательность всех простых множителей данного числа в порядке возрастания.
*/

void print_simple(int n){
    int a = 2, tmp = 0;
    for(;n != 1;){
        if( n % a == 0){
            printf("%d ", a, n);
            n /= a;
        }else{
            a++;
        }
    }
    printf("\n");
    return;
}

int main() {
    int n;
    scanf("%d", &n);
    print_simple(n);
	return 0;
}
