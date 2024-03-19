#include <stdio.h>
void mystrc(char str1[],char str2[],int n) {

	char temp[20];
	int i = 0,j = 0;
	while(str1[i] != '\0') {
	
		temp[i] = str1[j];
		i++;
		j++;
	
	}
	i--;
	j = 0;
	while(j <= n) {
	
		temp[i] = str2[j];
		i++;
		j++;
	}

	i--;
	temp[i] = '\0';
	puts(temp);

}
void main() {

	char str1[20];
	char str2[20];
	int n;

	printf("Enter String 1:");
	fgets(str1,20,stdin);

	printf("Enter String 2:");
	fgets(str2,20,stdin);

	printf("Enter the number of Characters to append from the second String:");
	scanf("%d",&n);

	mystrc(str1,str2,n);
}
