#include "stdio.h"
#include <string.h>
#include <stdlib.h>
/*
По одному разу
    В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

Input format
    Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.
Output format
    Маленькие английские буквы через пробел.
*/

// Функция сравнения для qsort
int cmp_char(const void *a, const void *b) {
    return (*(const char *)a - *(const char *)b);
}

void swap(char *str1, char *str2, int size){
    char tmpstr[100] = {0};
    strcpy(tmpstr, str1);
    strcpy(str1, str2);
    strcpy(str2, tmpstr);
}

void remove_duplicates(char *str){
    char last_symbol = str[0];
    for(int i = 1; i < strlen(str); i++){
        if(str[i] == last_symbol){
            str[i] = ' ';
            str[i-1] = ' ';
        }else{
            last_symbol = str[i];
        }
    }
}

int main() {
    FILE *fintput;
    FILE *foutput;
    fintput = fopen("input.txt","r"); 
    foutput = fopen("output.txt","w"); 

    char str1[100] = {0};
    char str2[100] = {0};
    fscanf(fintput, "%s %s\n", str1, str2);
    qsort(str1, strlen(str1), sizeof(char), cmp_char);
    qsort(str2, strlen(str2), sizeof(char), cmp_char);
    if(str1[0] > str2[0])
        swap(str1, str2, 100);

    // printf("swaped str1: %s\n", str1);
    // printf("swaped str2: %s\n", str2);
    remove_duplicates(str1);
    remove_duplicates(str2);
    printf("removed dobles str1: %s\n", str1);
    printf("removed dobles str2: %s\n", str2);

    for(int i = 0; i < strlen(str1); i++){
        for(int j = 0; j < strlen(str2); j++){
            if(str1[i] == str2[j] && (str1[i] != ' ' && str2[j] != ' ')){
                fprintf(foutput, "%c ", str1[i]);
            }
        }
    }
    fclose(fintput);
    fclose(foutput);
    
	return 0;
}

