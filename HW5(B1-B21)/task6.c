#include <stdio.h>

/*
Две одинаковые цифры рядом
	Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры, стоящие рядом.

Input format
	Одно целое число
Output format
	Единственное слов: YES или NO
*/

int main() {
    int val = 0, last = 0;
    scanf("%d", &val);
    
    for(; val > 0; val/=10){
        int tmp = val % 10;
		if(tmp == last){
			printf("YES");
			return 0;
		}
		last = tmp;
	}
	printf("NO");
}
