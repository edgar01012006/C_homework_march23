#include <stdio.h>

int main()
{
	int num = 0;
	
	printf("enter a number\n");
	scanf("%d", &num);

	num = num << 1;

	printf("num * 2 = %d", num);

	return 0;
}