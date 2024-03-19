#include <stdio.h>

char *mystrncat(char *dest,char *src,int n) {

	int i=0;
	while(*dest != '\0') 
		dest++;
	
	while(i < n) {
	
		*dest = *src;
		src++;
		dest++;
		i++;

	}

	*dest = '\0';
	return dest;
}

int main() {
	
	char str1[10],str2[15];
	int n;

	printf("Enter the Strings you want to concate with specified number of characters:");
	scanf("%s %s",str1,str2);

	printf("Enter the number of characters you want to concate:");
	scanf("%d",&n);

	mystrncat(str2,str1,n);
	printf("%s is concatenation of string with %d characters\n",str2,n);
	return 0;
}
