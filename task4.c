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

	if ((counter | 1) == counter)
	{
		printf("number of 1's in counter are odd\n");
	}
	else
	{
		printf("number of 1's in counter are even\n");
	}

	return 0;
}