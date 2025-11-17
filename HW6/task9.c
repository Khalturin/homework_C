#include "stdio.h"
#include "stdint.h"
/*
Факториал
    Составить функцию вычисления N!. Использовать ее при вычислении факториала int factorial(int n)

Input format
    Целое положительное число не больше 20
Output format
    Целое положительное число
*/

int factorial(int val){
    int res = 1;
    for(int i = 1; i <= val; i++){
        // printf("i=%d; res=%d\n", i, res);
        res *= i;
    }
    return res;
}

int main() {
    int val = 0;
    scanf("%d", &val);
    
    printf("%d\n", factorial(val));
        
	return 0;
}
