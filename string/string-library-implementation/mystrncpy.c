#include <stdio.h>

char *mystrncpy(char *dest,char *src,int n) {

	int i=0;
	while(i < n) {
	
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';
	return dest;

}
int main() {

	char str1[10],str2[20];
	int n;

	printf("Enter String1:");
	scanf("%s",str1);

	printf("String 1:%s\n",str1);

	printf("Enter the number of characters you want to copy:");
	scanf("%d",&n);

	mystrncpy(str2,str1,n);
	printf("The string after copying %d characters is %s\n",n,str2);
	return 0;
}
