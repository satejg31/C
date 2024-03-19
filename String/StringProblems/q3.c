#include <stdio.h>
void main() {

	char str[20],ch;
	int i = 0;

	while((ch = getchar()) != '\n') {
	
		str[i] = ch;
		i++;
	}
	str[i] = '\0';

	int cnt1=0,cnt2=0,cnt3=0;

	for(int j=0;j < i;j++) {
	
		if(str[j] >= 65 && str[j] <= 90) 
			cnt1++;

		if(str[j] >= 97 && str[j] <= 122) 
			cnt2++;
							
		if(str[j] >= 48 && str[j] <= 57) 
			cnt3++;
		
	}
	
	printf("Capital = %d\n",cnt1);
	printf("Small = %d\n",cnt2);
	printf("Digit = %d\n",cnt3);

	
}
