#include "stdio.h"
/*
Модуль числа
    Составить функцию, модуль числа и привести пример ее использования.

Input format
    Целое число
Output format
    Целое не отрицательное число
*/

int nod(int n, int m){
    // if(n == m)
    //     return n;
    // else if(n < m)
    //     return nod(n, m-n);
    // else
    //     return nod(n-m, m);

    return n == m ? n : (n < m ? nod(n, m-n) : nod(n-m, m));
}

int main() {
    int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", nod(n, m));
	return 0;
}


