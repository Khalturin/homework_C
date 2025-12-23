#include "stdio.h"
#include <string.h>
/*
Три раза
    В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.
Input format
    Строка из английских букв и пробелов. Не более 100 символов. В конце могут быть незначащие переносы строк.
Output format
    Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.
*/

int main() {
    FILE *fintput;
    FILE *foutput;
    fintput = fopen("input.txt","r"); 
    foutput = fopen("output.txt","w"); 
    
    char c;
    int len = 0;
    char str[100] = {0};
    while (fscanf (fintput, "%c", &c) == 1){
        if(c == '\n')
            continue;
        str[len] = c;
        len ++;   
    }
    fprintf(foutput, "%s, %s, %s", str, str, str);
    fprintf(foutput, " %d\n", len);
    fclose(fintput);
    fclose(foutput);
    
	return 0;
}
