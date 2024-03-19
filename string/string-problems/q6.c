#include <stdio.h>

int word(char str[]) {

	int i = 0,cnt = 0;
	while(str[i] != '\0') {
	
		if(str[i] == ' ')
			cnt++;
		i++;
	}
	
	return cnt+1;

}
void main() {

	char str[20];
	fgets(str,20,stdin);

	printf("The number of words in the sentence are %d\n",word(str));
}
