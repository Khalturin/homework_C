#include "stdio.h"
/*
Вычислить cos
    Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)
    cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
    float cosinus(float x)
Input format
    Целое число от 0 до 90
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

float cosinus(float x){
    float tmp = 1;
    float sign = -1;
    for(int i = 2; i <= 30; i+=2){
        tmp += (power(x, i) / factorial(i)) * sign;
        sign*=-1;
    }
    return tmp;
}

int main() {
    float x;
	scanf("%f", &x);
    printf("%.3f\n", cosinus(x / 180.0 * 3.14159265358979323846));
	return 0;
}


