#include "stdio.h"
/*
Количество цифр в тексте
	Составить логическую функцию, которая определяет, что текущий символ это цифра. Написать программу считающую количество цифр в тексте. int is_digit(char c)

Input format
	Текст из английских букв и знаков препинания. В конце текста символ точка.
Output format
	Одно целое число - количество цифр в тексте.
*/

int is_digit(char c){
	return c >= '0' && c <= '9';
}

int main() {
	char a = 0;
	int count_digit = 0;
	while(1){
		scanf("%c", &a);
		if(is_digit(a)) 
			count_digit++; 
		if(a == '.')
			break;
	}
	printf("%d\n", count_digit);
    return 0;
}


