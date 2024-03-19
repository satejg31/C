#include <stdio.h>

void mystrlwr(char str[]) {

	int i = 0;
       	while (str[i] != '\0') {
	
		if(str[i] >= 65 && str[i] <= 90) 
			str[i] += 32;
		i++;
	}	

	puts(str);
}
void main() {

	char str[20];
	fgets(str,20,stdin);

	mystrlwr(str);
}
