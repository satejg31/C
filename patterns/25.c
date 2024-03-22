/*
 *

	        1
	      1 2
	    1 2 3
	  1 2 3 4
	1 2 3 4 5
*/
#include <stdio.h>
void main() {

	for(int i=1;i < 6;i++) {
	
		for(int k=4;k >= i;k--) 
			printf("  ");

		for(int j=1; j<=i;j++)
			printf("%d ",j);

		printf("\n");
	}
}
