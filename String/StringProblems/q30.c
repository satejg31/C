#include <stdio.h>

void mystrset(char str[],char ch,int n) {

	char temp[20];
	int i = 0;

	while(str[i] != '\0') {
	
		if(i <= n-1) 
			temp[i] = ch;
		else
			temp[i] = str[i];
		
		i++;
	}
	i--;	
	temp[i] = '\0';
	puts(temp);
}
void main() {

	char str[20];
	char ch;
	int n;

	printf("Enter a string:");
	fgets(str,20,stdin);

	printf("Enter a character:");
	scanf("%c",&ch);

	printf("Enter the range of digits:");
	scanf("%d",&n);
	mystrset(str,ch,n);

}
