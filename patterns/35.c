/*
 *
 *     1 1 1 1 1
  	 2 2 2 2
     	   3 3 3
   	     4 4
 	       5
*/

#include <stdio.h>
void main() {

	for(int i=1;i <= 5;i++) {
	
		for(int j=1;j <= 5;j++) {
		
			if(i <= j)
				printf("%d ",i);
		      	else
				printf("  ");	
		}
		printf("\n");
	}
}
