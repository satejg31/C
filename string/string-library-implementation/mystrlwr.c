#include <stdio.h>

char *mystrlwr(char *str) {

	while(*str != '\0') {
	
		if(*str >= 65 && *str <= 90) {
		
			*str+32;
		}

		str++;
	}

	return str;
}
void main() {

	char *str = "This is a str";
	char *lwr;

	lwr = mystrlwr(str);

	printf("%s\n",lwr);
}
