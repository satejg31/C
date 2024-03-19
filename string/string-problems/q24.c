#include <stdio.h>
#include <string,h>

void mystrev(char str[],int n) {

	char temp[20];
	int i = 0;
	int t = n;

	while(n > i) {
	
		temp[i]=str[i];
		i++;
	}
	
	for(int i = 0;str[i] != '\0';i++) {
	

	}
	
	
	temp[i] = '\0';
	puts(temp);

}
void main() {

	char str[20];
	int n;

	printf("Enter the string:");
	fgets(str,20,stdin);

	printf("Enter which last n characters you want:");
	scanf("%d",&n);
	
	mystrev(str,n);
}
