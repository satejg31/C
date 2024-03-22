/*
 *
 * 	5 4 3 2 1
  	  4 3 2 1
	    3 2 1
	      2 1
	        1
*/

#include <stdio.h>
void main() {

	for(int i=5;i >0 ;i--) {
	
		for(int j=5;j > 0;j--) {
			if(i >= j)
				printf("%d ",j);
			else
				printf("  ");

	}
		printf("\n");
	}
}
