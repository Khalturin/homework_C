#include "stdio.h"
#include <string.h>
#include <stdlib.h>
/*
Заменить a на b
    В файле input.txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в output.txt.

Input format
    Строка из маленьких и больших английских букв, знаков препинания и пробелов.
Output format
    Строка из маленьких и больших английских букв, знаков препинания и пробелов.
*/


int main() {
    FILE *fintput;
    FILE *foutput;
    fintput = fopen("input.txt","r"); 
    foutput = fopen("output.txt","w"); 

    char str[1000] = {0};
    fgets(str, 1000, fintput);
    // fscanf(fintput, "%s\n", str);
    // fprintf(stdout, "source: %s\n", str);
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'A')
            str[i]++;
        else if(str[i] == 'b' || str[i] == 'B'){
            str[i]--;
        }
    }
    // fprintf(stdout, "result: %s\n", str);
    fprintf(foutput, "%s\n", str);
    fclose(fintput);
    fclose(foutput);
    
	return 0;
}

