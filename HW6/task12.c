#include "stdio.h"
/*
Вычислить sin
    Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
    sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)

    float sinus(float x)
Input format
    Одно число от 0 до 90
Output format
    Вещественное число в формате "%.3f"
*/

float power(float val, float vpow){
    if(vpow == 0)
        return 1;
    float res = val;
    for(int i = 2; i <= vpow; i++)
        res *= val;
    return res;
}

int factorial(int val){
    int res = 1;
    for(int i = 1; i <= val; i++){
        res *= i;
    }
    return res;
}

float sinus(float x){
    float tmp = x;
    float sign = -1;
    for(int i = 3; i <= 25; i+=2){
        tmp += (power(x, i) / factorial(i)) * sign;
        sign*=-1;
    }
    return tmp;
}

int main() {
    float x;
	scanf("%f", &x);
	printf("%.3f\n", sinus(x/180.0*3.14));
	return 0;
}


