/*
 *
 * 	A B C D E
  	  B C D E
    	    C D E
              D E
        	E

*/

#include <stdio.h>
void main() {


	for(int i=65;i <= 69;i++) {
	
		for(int j=65;j <= 69;j++) {
		
			if(i <= j)
				printf("%c ",j);
			else
				printf("  ");
		} 
		printf("\n");
	}
}
