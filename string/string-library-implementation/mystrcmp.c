#include <stdio.h>

int mystrcmp(char *str1,char *str2) {
	
	int i=0;
	while(*str1 != '\0') {
	
		if(*str1 != *str2)
			break;
		
		str1++;
		str2++;
	}
		
	i = *str1 - *str2;
	return i;
}

int main() {

	char str1[10],str2[10];
	int n;

	printf("Enter String1:");
	scanf("%s",str1);
	printf("Enter String2:");
	scanf(" %s",str2);
	
	printf("String1:%s\n",str1);
	printf("String2:%s\n",str2);
	
	n = mystrcmp(str1,str2);
	
	if(n > 0)
		printf("String1 is greater than String2\n");
	else if(n == 0)
		printf("String1 is equal to String2\n");
	else
		printf("String1 is smaller than String2\n");
	
	return 0;
}
