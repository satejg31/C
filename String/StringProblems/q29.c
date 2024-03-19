#include <stdio.h>

void mystrset(char str[],char ch) {

	char temp[20];
	int i = 0;
	while(str[i] != '\0') {
	
		temp[i] = ch;
		i++;
	}

	temp[i] = '\0';
	puts(temp);

}
void main() {

	char str[20];
	char ch;

	printf("Enter a string:");
	fgets(str,20,stdin);
	
	printf("Enter a character you want to replace:");
	scanf("%c",&ch);

	mystrset(str,ch);
}
