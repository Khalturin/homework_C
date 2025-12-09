#include "stdio.h"
#include "stdint.h" 
/*
Цифры в строке
    Написать только одну функцию. Всю программу отправлять не надо. Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество. Функция должно строго соответствовать прототипу:
void print_digit(char s[])

Input format
    Строка из английских букв, пробелов, знаков препинания и цифр
Output format
    Функция должна принмать на вход строку и выводить на печать по формату: Цифра пробел количество.
*/

void print_digit(char s[]){
    int digits[10] = {0};
    
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] < '0' || s[i] > '9')
            continue;
        int a = s[i] - '0';
        digits[a]++;
    }
    for(int i = 0; i < 10; i++){
        if(digits[i])
            printf("%d %d\n", i, digits[i]);
    }
}

int main() {
    char c[] = {"Hello123 world77."};
    print_digit(c);
	return 0;
}
