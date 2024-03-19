#include <stdio.h>
long mystrlen(char str[]) {

	int i = 0;

	while(1) {
	
		if(str[i] == '\n')
			break;
		else
			i++;
	}
		
	return i;
}
void main() {

	char str[20];
	fgets(str,20,stdin);
	
	printf("%ld is the length of the string\n",mystrlen(str));

}
