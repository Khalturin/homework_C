#include "stdio.h"
#include "stdint.h" 
/*
Цифры по возрастанию
    Написать функцию и программу демонстрирующую работу данной функции. Вывести в порядке возрастания цифры, входящие в десятичную запись натурального числа N, не более 1000 цифр. Цифра пробел сколько раз данная цифра встречается в числе.

Input format
    Натуральное число не более 1000 цифр
Output format
    Цифры входящие в число через пробел в порядке возрастания. От самой младшей цифры до самой старшей и количество.
*/

void count_digits(uint64_t val){
    int digits[10] = {0};
    if(val == 0){
        digits[0]++;
    }
    for(; val > 0; val/=10){
        int tmp = val % 10;
        digits[tmp]++;
    }

    for(int i = 0; i < 10; i++){
        if(digits[i])
            printf("%d %d\n", i, digits[i]);
    }
}

int main() {
    // uint64_t val = 0;
    // scanf("%ulld", &val);
    int digits[10] = {0};
    char c;
    while((c = getchar()) != '\n'){
        int a = c - '0';
        digits[a]++;
    }
    for(int i = 0; i < 10; i++){
        if(digits[i])
            printf("%d %d\n", i, digits[i]);
    }

	return 0;
}
