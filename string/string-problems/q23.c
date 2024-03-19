#include <stdio.h>

void mystrev(char str[],int n) {

	int t = n;
	char temp[20];
	int i = 0;

	while (n >= 0) {
	
		temp[i] = str[n];
		n--;
		i++;
	}

	t++;
	temp[i] = '\0';	

	while(str[t] != '\0') {
	
		temp[i] = str[t];
		i++;
		t++;

	}
	i--;
	temp[i] = '\0';
	puts(temp);
}
void main() {

	char str[20];
	int n;

	printf("Enter the string:");
	fgets(str,20,stdin);

	printf("Enter the number of characters you want to reverse:");
	scanf("%d",&n);

	mystrev(str,n-1);
}
