#include <stdio.h>

char temp[50];

char *mystrchr(char s[],char ch) {

	int i=0,j=0;
	
	while(s[i] != '\0') {
	
		if(s[i] == ch) {
		
			while(s[i] != '\0') {
			
				temp[j] = s[i];
				j++;
				i++;
			}
			break;

		} else {
		
			i++;
		}
	}

	temp[j] = '\0';
	return temp;
}

int main() {

	char str[50] = "This is a string for testing";
	char ch,*p;

	printf("Enter a character to check the occurence in the string:");
	scanf("%c",&ch);

	p = mystrchr(str,ch);
	printf("%s\n",p);
	
	return 0;
}
