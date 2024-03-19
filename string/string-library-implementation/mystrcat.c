#include <stdio.h>


char *mystrcat(char *dest,char *src) {

	while(*src != '\0') 
		src++;

	while(*dest != '\0') {
	
		*src = *dest;
		src++;
		dest++;
	}

	*src = '\0';
	return src;
}
int main() {
	
	char str1[10],str2[15];
	char *s;

	printf("Enter both the strings:");
	scanf("%s %s",str1,str2);

	printf("The first string is as follows:%s\n",str1);
	printf("The second string is as follows:%s\n",str2);

	mystrcat(str2,str1);
	printf("%s is the concatenation of both the strings\n",str1);
	return 0;
}
