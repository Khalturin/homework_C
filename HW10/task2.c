#include "stdio.h"
#include <string.h>
/*
Строка и цифры
    Считать число N из файла input.txt. Сформировать строку из N символов. N четное число, не превосходящее 26. На четных позициях должны находится четные цифры в порядке возрастания, кроме 0, на нечетных позициях - заглавные буквы в порядке следования в английском алфавите. Результат записать в файл output.txt
Input format
    Четное N ≤ 26
Output format
    Строка из английских букв и цифр
*/

int main() {
    FILE *fintput;
    FILE *foutput;
    fintput = fopen("input.txt","r"); 
    foutput = fopen("output.txt","w"); 
    
    int val;
    char c = 'A';
    char str[100] = {0};
    fscanf (fintput, "%d", &val);
    for(int i = 0; i < val; i++){
        if(i != 0 && i%2 != 0){
            sprintf(&str[i], "%d", i%8 + 1);
        }else{
            str[i] = c;
            c++;
        }
    }
    
    fprintf(foutput, "%s", str);
    fclose(fintput);
    fclose(foutput);
    
	return 0;
}

