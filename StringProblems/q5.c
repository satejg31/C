#include <stdio.h>

int myspace (char str[]) {

	int i = 0,cnt = 0;
	while (str[i] != '\0') { 
		if(str[i] == ' ')
			cnt++;
		i++;
	}

	return cnt;
}
void main() {

	char str[10];
	fgets(str,10,stdin);

	printf("%d are the number of spaces\n",myspace(str));

}
