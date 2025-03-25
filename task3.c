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

	printf("counter of 1's = %d", counter);

	return 0;
}