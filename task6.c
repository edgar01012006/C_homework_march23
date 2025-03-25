#include <stdio.h>

int main()
{
	int num = 0;
	int counter = 0;

	printf("enter a number\n");
	scanf("%d", &num);

	while (num != 0)
	{
		if ((num | 1) == num)
		{
			++counter;
		}
		num = num >> 1;
	}

	if (counter == 1)
	{
		printf("your number is a power of 2\n");
	}
	else
	{
		printf("your number is not power of 2\n");
	}

	return 0;
}