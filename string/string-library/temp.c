#include <stdio.h>

int main(void)
{
	char* msg = "SARTEJ";
	printf("Size - %ld\n", sizeof(*msg));

	int i=0;
	while(*(msg + i) != '\0')
		i++;

	printf("%d\n", i);

	return 0;
}

