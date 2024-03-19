#include <stdio.h>
#include <stdlib.h>

int mystrl(char str[]) {

	int i = 0,cnt = 0;
	while (str[i] != '\0') {
	
		cnt++;
		i++;
	}

	return cnt;

}

int mystrcmp(char str1[],char str2[]) {

	int i = 0;
	int flag = 0;

	while(str1[i] != '\0') {
	
		if(str1[i] == str2[i]) {
		
			flag = 0;
			i++;
		} else {
		
			flag = 1;
			break;
		}
	}

	if(flag == 1) {
	
		printf("Both the Strings are not equal because the characters differ as %c and %c\n",str1[i],str2[i]);
	} else {
	
		printf("Both Strings are equal\n");
		return 0;
	}
		

}
void main() {

	char str1[20];
	char str2[20];
	int x = 0,y = 0;

	printf("Enter String 1:");
	fgets(str1,20,stdin);

	printf("Enter String 2:");
	fgets(str2,20,stdin);

	x = mystrl(str1);
	y = mystrl(str2);
	
	if(x != y) {
		printf("Both Strings are not Equal in length\n");
		exit (0);
	} else
		mystrcmp(str1,str2);


}

