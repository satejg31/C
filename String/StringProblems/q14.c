#include <stdio.h>

void mystrcpy(char str[],char temp[]) {

	int i = 0;
	while (str[i] != '\0') {
	
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	puts(temp);
}
void main() {

	char str[20];
	char temp[20];

	fgets(str,20,stdin);

	mystrcpy(str,temp);

}
