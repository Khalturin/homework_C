#include "stdio.h"
#include "string.h"

#define EXIT_SUCCESS 0
#define INT_COUNT 6

/*
Домик
Вывести на экран рисунок из букв

     *
    ***
   *****
  *******
   HHOHH
   ZZZZZ
*/

int counts[INT_COUNT] = {1, 3, 5, 7, 5, 5};

int main(){
	for(int i = 0; i < INT_COUNT; i++){
		int spaces = 0;
		if(counts[i] == 1)
			spaces = 3;
		else if(counts[i] == 3)
			spaces = 2;
		else if(counts[i] == 5)
			spaces = 1;
		else if(counts[i] == 7)
			spaces = 0;
		printf("%*s", spaces, "");
		char buffer[counts[i]+1];
		char fill_char = (i > 3 ? (i > 4 ? 'Z' : 'H') : '*');
    		memset(buffer, fill_char, sizeof(buffer));
		if(fill_char == 'H') buffer[(sizeof(buffer)/2)-1] = 'O';
		buffer[sizeof(buffer) - 1] = '\0';
		printf("%s\n", buffer);
	}

	return EXIT_SUCCESS;
}
