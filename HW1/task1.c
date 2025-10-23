#include "stdio.h"

#define EXIT_SUCCESS 0
#define STR_COUNT 3

/*
Let;s go
Вывести на экран текст "лесенкой"

	 Let's
           go
             to walk
*/

const char * str[STR_COUNT] = {"Let's", "go", "to walk"};

int main(){
	for(int i = 0; i < STR_COUNT; i++){
		if(i > 0)
			printf("%*s", i+1, "");
		printf("%s\n", str[i]);
	}

	return EXIT_SUCCESS;
}
