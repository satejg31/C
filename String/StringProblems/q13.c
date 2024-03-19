#include <stdio.h>

int myana (char str1[],char str2[],int n) {

	int flag = 0;
	for(int i=0;i < n;i++) {

		for(int j = 0;j < n;j++) {
						
			if(str1[i] == str2[j]) {
				
				flag = 0;
				break;
			}
			else 
				flag = 1;
		}
	}

	if(flag == 1)
		return 0;
	else
		return -1;
	
}

void main() {

	char str1[10];
	char str2[10];

	fgets(str1,10,stdin);
	fgets(str2,10,stdin);

	int ret = myana(str1,str2,10);
	
	if(ret == -1)
		printf("Strings are not anagram\n");
	else
		printf("Strings are anagram\n");

}
