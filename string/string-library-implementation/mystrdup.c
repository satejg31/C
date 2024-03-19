#include <stdio.h>

void mystrdup(char *str,char *dup) {


	while(*str != '\0') {
	
		*dup = *str;
		dup++;
		str++;
	}

	printf("%s\n",dup);	
	return dup;

}

void main() {

	char *str = "This is satej";
	char *dup;
	
	mystrdup(str,dup);
	printf("Duplicate of the string is %s\n",dup);
}
