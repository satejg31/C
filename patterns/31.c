/*
 *
 *	E E E E E
	  D D D D
	    C C C
	      B B
	        A
*/

#include <stdio.h>
void main() {

	for(int i=69;i > 64;i--) {
	
		for(int j=69;j > 64;j--) {
		
			if(i >= j)
				printf("%c ",i);
			else
				printf("  ");
		}
		printf("\n");
	}
}
