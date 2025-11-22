#include "stdio.h"
/*
Скобки
	Проверить строку состоящую из скобок "(" и ")" на корректность.

Input format
	На вход подается строка состоящая из символов '(', ')' и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
Output format
	Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае.
*/
int main() {
	char a = 0;
	int count_opened_brace = 0, count_closed_brace = 0;
	while(1){
		scanf("%c", &a);
		if(a == '(')
			count_opened_brace++;
		else if(a == ')' && count_opened_brace > 0)
			count_closed_brace++;
		if(a == '.')
			break;
	}
	printf("%s\n", count_opened_brace == count_closed_brace ? "YES" : "NO");
    return 0;
}


