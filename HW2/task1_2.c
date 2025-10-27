#include stdio.h

int main() {
	printf(%xn, 12345678);
	printf(%dn, 0x12345678);
	
	printf(%xn, 1000000);
	printf(%dn, 0x1000000);
/*
Stdout:
	bc614e
	305419896
	f4240
	16777216
*/
}

