#include "stdio.h"
/*
В прямом порядке
    Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
void print_num(int num)

Input format
    Одно целое неотрицательное число
Output format
    Все цифры числа через пробел в прямом порядке.
*/

void print_num(int n){
    if(n / 10 == 0 ){
        printf("%d ", n % 10);
        return;
    }
    print_num(n / 10);
    printf("%d ", n % 10);

    return;
}

int main() {
    int val;
	scanf("%d", &val);
	
    print_num(val);
	return 0;
}


