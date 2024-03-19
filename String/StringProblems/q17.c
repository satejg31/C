#include <stdio.h>
int mystrl(char s[]) {

	int cnt = 0,i = 0;
	while(s[i] != '\0') {
		
		cnt++;
		i++;
	}

	return cnt;

}
void mystrcat(char str1[],char str2[],int x) {
	
	char temp[x+1];
	int i = 0,j = 0;
	while(str1[j] != '\0') {
	
		temp[i] = str1[j];
		i++;
		j++;
	}
	i--;	
	j = 0;
	while(str2[j] != '\0') {
	
		temp[i] = str2[j];
		i++;
		j++;
	}
	i--;	
	temp[i] = '\0';
	printf("%s\n",temp);

}
void main() {

	char str1[20];
	char str2[20];

	printf("Enter String 1:");
	fgets(str1,20,stdin);

	printf("Enter String 2:");
	fgets(str2,20,stdin);
	
	int x = 0;
	x = mystrl(str1) + mystrl(str2);
	
	mystrcat(str1,str2,x);

}
