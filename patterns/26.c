/*
 *
 *	        A
	      B B
	    C C C
	  D D D D
	E E E E E
*/

#include <stdio.h>
void main() {
	
	
	  char ch='A';
	  for(int i=1;i < 6;i++) {
	  	
		  for(int k=4;k >= i;k--) 
			  printf("  ");

		  for(int j=1;j <=i;j++)
			  printf("%c ",ch);

		  ch++;
		  printf("\n");
	  }
}
