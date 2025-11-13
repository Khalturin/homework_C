#include <stdio.h>

/*
Ровно три цифры
	Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Input format
	Целое положительное число
Output format
	Одно слов: YES или NO
*/

int main() {
    int val = 0, count = 0;
    scanf("%d", &val);
    
    for(; val > 0; val/=10)
        count++;
    
    if(count == 3)
        printf("YES\n");
    else
        printf("NO");
}

