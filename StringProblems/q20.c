#include <stdio.h>
#include <stdlib.h>

int myl(char str[]) {

	int i = 0,cnt = 0;
	while(str[i] != '\0') {
	
		cnt++;
		i++;
	}

	return cnt;
}

int mystrcmp(char str1[],char str2[],int n) {
	
	int i = 0;
	int flag = 0;	
	while(str1[i] != '\0' && i <= n) {
	
			if(str1[i] == str2[i]) {
				
				flag = 0;
				i++;

			} else {
			
				flag = 1;
				break;
			}	
	}
	
	if(flag == 1) {
		
		printf("The Strings differ in characters %c and %c\n",str1[i],str2[i]);
	
	} else {
	
		printf("Both the strings are equal\n");
		return 0;
	
	}

}

void main() {

	char str1[20];
	char str2[20];
	int x = 0,y = 0,n = 0;

	printf("Enter String 1:");
	fgets(str1,20,stdin);

	printf("Enter String 2:");
	fgets(str2,20,stdin);
	
	x = myl(str1);
	y = myl(str2);

	if(x != y) {
	
		printf("Both the strings differ in length so are invalid\n");
		exit (0);

	} else {

		printf("Enter the number of characters you want to compare from string 2 with whole string 1:");
		scanf("%d",&n);
		mystrcmp(str1,str2,n-1);
	
	}

}
