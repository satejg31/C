#include <stdio.h>

char *mystrcpy(char dest[],char src[]) {
	
	int i=0;
	while(src[i] != '\0') {
	
		dest[i] = src[i];
		i++;

	}

	dest[i] = '\0';
	return dest;
}

int main() {

	char str1[20],str2[10];
	printf("Enter the string:");
	scanf("%[^\n]",str1);

	printf("The entered string is %s\n",str1);

	mystrcpy(str2,str1);
	printf("%s is the copy of the string entered\n",str2);
	return 0;
}
