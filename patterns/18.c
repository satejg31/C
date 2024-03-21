/*
 *
 * 	A A A A A
	B B B B
	C C C
	D D
	E

*/

#include <stdio.h>
void main() {

	for(int i=65;i < 70;i++) {
	
		for(int j=70;j >i;j--) 
			printf("%c ",i);

		printf("\n");
	}
}
