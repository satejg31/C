#include <stdio.h>

void mystrupr(char str[]) {

	int i = 0;
       	while(str[i] != '\0') {
	
		if(str[i] >= 97 && str[i] <= 122) 
			str[i] -= 32;
		i++;
	}	
	
	printf("%s\n",str);

}
void main() {

	char str[20];
	fgets(str,20,stdin);

	mystrupr(str);
}
