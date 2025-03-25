#include <stdio.h>

int main()
{
	int num = 0;
	int n = 0;

	printf("enter a number\n");
	scanf("%d", &num);
	printf("enter an index\n");
	scanf("%d", &n);

	if ((num | (1 << n)) == num)
	{
		printf("n index = 1\n");
	}
	else
	{
		printf("n index = 0\n");
	}

	return 0;

}