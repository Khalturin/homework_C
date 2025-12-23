#include "stdio.h"
#include <string.h>
/*
Последний номер символа
    В файле input.txt дана строка из не более 1000 символов. Показать номера символов, совпадающих с последним символом строки.
Результат записать в файл output.txt

Input format
    Строка из не более 1000 символов
Output format
    Целые числа через пробел - номера символа, который совпадает с последним символом строки.
*/

int main() {
    FILE *fintput;
    FILE *foutput;
    fintput = fopen("input.txt","r"); 
    foutput = fopen("output.txt","w"); 
    fseek(fintput, -3, SEEK_END);
    int size = ftell(fintput);
    char end_ch = fgetc(fintput);
    if(end_ch == '\n')
        fprintf(foutput, "Oooops the last character is a line break.\n");
    printf("%c %d\n", end_ch, size);
    fseek(fintput, 0, SEEK_SET);
    char ch;
    for(int i = 0; i <= size; i++){
        ch = fgetc(fintput);
        if(ch == end_ch && i != size)
            fprintf(foutput, "%d ", i);
    }
    fclose(fintput);
    fclose(foutput);
    
	return 0;
}

