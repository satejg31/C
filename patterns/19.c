/*
 * 	A B C D E 
	A B C D 
	A B C 
	A B 
	A 
*/
#include <stdio.h>
void main() {

	for(int i= 70;i > 65;i--) {
	
		for(int j=65;j < i;j++)
			printf("%c ",j);

		printf("\n");
	}
}
