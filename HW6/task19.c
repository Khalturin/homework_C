#include "stdio.h"
/*
Сумма цифр в тексте
	Составить функцию, которая преобразует текущий символ цифры в число. Написать программу считающую сумму цифр в тексте. int digit_to_num(char c)

Input format
	Строка состоящая из английских букв, пробелов, знаков препинания. В конце строки символ точка.
Output format
	Целое число - сумма цифр в тексте
*/

 int digit_to_num(char c){
	return c >= '0' && c <= '9' ? c - '0' : 0;
}

int main() {
	char a = 0;
	int sum = 0;
	while(1){
		scanf("%c", &a);
		sum += digit_to_num(a);
		if(a == '.')
			break;
	}
	printf("%d\n", sum);
    return 0;
}


