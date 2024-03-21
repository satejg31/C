/*
 *	A
	B B
	C C C
	D D D D
	E E E E E
*/

#include <stdio.h>
void main () {

	for(int i=65; i < 70;i++) {
	
		for(int j=65; j <= i;j++) 
			printf("%c ",i);

		printf("\n");
	}
}
