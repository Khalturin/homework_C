#include "stdio.h"

#define EXIT_SUCCESS 0
#define COUNT_VALUES 3

/*
Какое время года
	Ввести номер месяца и вывести название времени года.

Формат входных данных
	Целое число от 1 до 12 - номер месяца.
Формат результата
	Время года на английском: winter, spring, summer, autumn
*/

int main(){
	int val;
	scanf("%d", &val);
	
	if(val >= 1 && val <= 2 || val == 12)
		printf("winter\n");
	else if(val >= 3 && val <= 5)
		printf("spring\n");
	else if(val >= 6 && val <= 8)
		printf("summer\n");
	else if(val >= 9 && val <= 11)
		printf("autumn\n");
	else
		printf("error - uncorrect number!\n");

	return EXIT_SUCCESS;
}
