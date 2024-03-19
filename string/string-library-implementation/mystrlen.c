#include <stdio.h>

int mystrlen(char str[]) {

	int i=0,cnt=0;
	while(str[i] != '\0') {
	
		i++;
		cnt++;
	}

	return cnt;
}

int main() {

	char str[20];
	int cnt = 0;

	printf("Enter a string:");
	scanf("%[^\n]",str);
	printf("The entered String is as follows:%s\n",str);
	
	cnt = mystrlen(str);
	printf("%d is the length of the string\n",cnt);
	return 0;
}
