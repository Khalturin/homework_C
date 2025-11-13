#include <stdio.h>
/*
Проверка на простоту
	Проверить число на простоту.

Input format
	Натуральное число
Output format
	Если число является простым напечатать YES, иначе NO
*/

int main() {
	int val = 0;
	scanf("%d", &val);
	if(val < 2){
		printf("NO\n");
		return 0;
	}
	for(int i = 2; i < val; i++){
		if(val % i == 0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
