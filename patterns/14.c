/*
 * 	A
	A B
	A B C
	A B C D
	A B C D E
*/

#include <stdio.h>
void main() {
	
	for(int i=65;i < 70;i++){
	
		for(int j=65;j <=i;j++) 
			printf("%c ",j);

		printf("\n");
	}
}
