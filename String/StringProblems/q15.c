#include <stdio.h>
void mystrcpy(char str[],int n) {

	char tempstr[n];
	int i = 0;
	while(i <= n) {
	
		tempstr[i] = str[i];
		i++;
	
	}
	i--;
	tempstr[i] = '\0';

	puts(tempstr);
}
void main() {

	char str[20];
	printf("Enter a string:");
	fgets(str,20,stdin);

	int n;
	printf("Enter a number upto which you want to print the entered string:");
	scanf("%d",&n);

	mystrcpy(str,n);
}
