#include "stdio.h"
/*
В обратном порядке
    Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.

Input format
    Одно не отрицательное целое число
Output format
    Последовательность цифр введенного числа в обратном порядке через пробел
*/

int reverse_order(int n){
    printf("%d ", n % 10);
    return n / 10 == 0 ? 0 : reverse_order(n / 10);
}

int main() {
    int val;
	scanf("%d", &val);
	
    reverse_order(val);
	return 0;
}


