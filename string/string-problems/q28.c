#include <stdio.h>
#include <string.h>

void mystrpal(char str[]) {

	char temp[20];
	int i = 0,x = 0;
	int flag = 0;
       	while(str[i] != '\0') {
	
		temp[i] = str[i];
	       	i++;	
	}	
	
	temp[i] = '\0';
	i = 0;
	x = strlen(temp);
	x--;
	while(str[i] != '\0') {
	
		if(temp[x] == str[i])
			flag = 0;
		else {
			flag = 1;
			break;
		}	
		
		x--;
		i++;
	}
		
	if(flag == 1) 
		printf("The String is a palindrome\n");
	else
		printf("The string is not a palindrome\n");	
}
void main() {

	char str[20];

	printf("Enter a String:");
	fgets(str,20,stdin);

	mystrpal(str);
}
