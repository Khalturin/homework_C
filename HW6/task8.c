#include "stdio.h"
#include "stdint.h"
/*
Большими буквами
    Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования.

Input format
    Строка состоящая из английских букв, пробелов и запятых. В конце строки символ точка.
Output format
    Исходная строка в которой маленькие английские буквы заменены заглавными.
*/

char translateToUppercase(char val){
    if(val >= 'a' && val <= 'z')
        val -= ('a'-'A');
    return val;
}

int main() {
    char val = 0;
    while((val = getchar()) != '.'){
        val = translateToUppercase(val);
        // printf("%d\n", translate(val, sys));
        putchar(val);
    }
	return 0;
}
