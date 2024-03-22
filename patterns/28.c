/*
 *
 * 	* * * * *
  	  * * * *
	    * * *
	      * *
	        *
*/

#include <stdio.h>
void main() {

	for(int i=5;i > 0;i--) {
	
		for(int j=5;j > 0;j--) {
		
			if(i >= j)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}

}
