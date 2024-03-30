/*
 *
 *    1 2 3 4 5
  	2 3 4 5
  	  3 4 5
  	    4 5
  	      5

*/

#include <stdio.h>
void main() {

	for(int i=1;i <= 5;i++) {
	
		for(int j=1;j <= 5;j++) {
		
			if(i <= j)
				printf("%d ",j);
			else
				printf("  ");
		}
		printf("\n");
	}
}
