#include <stdio.h>
void mystrcpy(char str[],int i) {

	char temp[10];
	int j = 0;
	while(str[i] != '\0') {
	
		temp[j] = str[i];
	       	i++;
		j++;	
	}
	j--;
	temp[j] = '\0';
	puts(temp);

}
void main() {

	char str[20];
	int i;
	printf("Enter your string:");
	fgets(str,20,stdin);
	
	printf("Enter the which n last characters you want to know of the string:");
	scanf("%d",&i);
	
	mystrcpy(str,i);	
}
