/*
 *	E D C B A 
	E D C B 
	E D C 
	E D 
	E 
*/
#include <stdio.h>
void main() {

	for(int i=65;i < 70;i++) {
	
		for(int j=69;j >= i;j--) 
			printf("%c ",j);

		printf("\n");
	}
}
