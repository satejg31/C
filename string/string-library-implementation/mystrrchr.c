#include <stdio.h>

char temp[50];

int mystrrchr(char s[],char ch) {

	int i=0,j=0;

	while(s[i] != '\0') {
			
		if(s[i] == ch)
			j = i;
				
		i++;
	}	
	
	return j;
}

char *cpy(char t[],int x) {

	int i=0;
	while(t[x] != '\0') {
	
		temp[i] = t[x];
		x++;
		i++;
	}

	temp[i] = '\0';
	return temp;
}

void main() {

	char str[50] = "This is string for testing";
	char ch,*p;

	printf("Enter a character:");
	scanf("%c",&ch);
	
	int x = mystrrchr(str,ch);
	
	p = cpy(str,x);

	printf("%s\n",p);

}
