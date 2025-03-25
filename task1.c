#include <stdio.h>

int main()

{
	int num = 0;
	
	printf("enter a number\n");
	scanf("%d", &num);

	if ((num | 1) == num)
	{
		printf("your number is odd\n");
	}
	else
	{
		printf("your number is even\n");
	}

	return 0;
}