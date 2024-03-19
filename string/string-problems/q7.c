#include <stdio.h>
void main() {

	char str[20];
	fgets(str,20,stdin);

	int i = 0,cnt = 0;

	while(str[i] != '\0') {
	
		if (str[i] == ' ')
			cnt++;
		i++;
	}
	printf("%d\n",cnt);

	int arr[cnt+1];
	i = 0;
	int j = 0,cnt1 = 0;
	while(str[i] != '\0') {
		
		while(str[i] != ' ') {
			cnt1++;
		}	
			arr[j] = cnt1;
			j++;

			cnt1 = 0;
	
		i++;
	}

	for(int i = 0;j < cnt+1;j++)
		printf("%d\n",arr[j]);

}
