#include <stdio.h>

void mystrev(char str[]) {

	char temp[20];
	char ch;
	int i = 0;
	while(str[i] != '\0') {
	
		i++;
	}

	i--;
	int j = 0;
	while(i >= 0) {
		
		temp[j] = str[i];
		j++;
		i--;
	}
	temp[j] = '\0';
	printf("%s\n",temp);

}
void main() {

	char str[20];

	printf("Enter a String:");
	fgets(str,20,stdin);

	mystrev(str);
}
