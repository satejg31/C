/*
 *
 *	        A
	      A B
	    A B C
	  A B C D
	A B C D E
*/

#include <stdio.h>
void main() {

	for(int i=1;i < 6;i++) {
			
		char ch='A';	
		for(int k=4;k >= i;k--)
			printf("  ");

		for(int j=1;j <= i;j++) 
			printf("%c ",ch++);

		printf("\n");	
}
}
