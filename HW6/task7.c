#include "stdio.h"
#include "stdint.h"
/*
Перевести число N в систему счисления P
    Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления.

Input format
    Два целых числа. N ≥ 0 и 2 ≤ P ≤ 9
Output format
    Одно целое число
*/

int power(int val, int vpow){
    if(vpow == 0)
        return 1;
    int res = val;
    for(int i = 2; i <= vpow; i++)
        res *= val;
    return res;
}

int translate(int val, int sys){
    int res = 0;
    for(int i = 0; val/sys != 0 || val%sys != 0; val/=sys, i++){
        res += val%sys * power(10, i);
    }
    return res;
}

int main() {
    int val = 0, sys = 0;
    scanf("%d %d", &val, &sys);
    printf("%d\n", translate(val, sys));
	return 0;
}
