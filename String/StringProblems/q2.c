#include <stdio.h>
void main() {

	char str[20];
	fgets(str,20,stdin);

	for(int i=0;i < 20;i++) {
	
		if(str[i] == 'a' || str[i] == 'z')
			str[i] = '\0';
	}

	for(int i=0;i < 20;i++)
		printf("%c",str[i]);

	printf("\n");
}
