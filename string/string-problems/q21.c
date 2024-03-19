#include <stdio.h>
#include <stdlib.h>

int myl(char str[]) {

	int i = 0,cnt = 0;
	while (str[i] != '\0') {
	
		cnt++;
		i++;
	}

	return cnt;
}

int mystrc(char str1[],char str2[]) {

	int i = 0;
	int flag = 0;

	while(str1[i] != '\0') {
	
		

		if(str1[i] == str2[i]) {
		
			flag = 0;
			i++;
		
		} else {
			
			if((str1[i] == (str2[i]+=32)) || (str1[i] == (str2[i]-=32)))
				flag = 0;
			else {
				flag = 1; 
				break;
			}
		}
	}

	if(flag == 1) {
	
		printf("Both strings differ in characters %c and %c\n",str1[i],str2[i]);

	}
	else {
	
		printf("Both the strings are equal\n");
		return 0;
	}

}
void main() {

	char str1[20];
	char str2[20];
	int x = 0,y = 0;

	printf("Enter String 1;");
	fgets(str1,20,stdin);

	printf("Enter String 2:");
	fgets(str2,20,stdin);

	x = myl(str1);
	y = myl(str2);

	if(x != y) {
	
		printf("Both the strings differ in length so they are not equal\n");
		exit(0);
	} else {
	
		mystrc(str1,str2);
	}


}
