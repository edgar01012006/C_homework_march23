#include <stdio.h>

int main()
{
	int num = 0;
	int n = 0;

	printf("enter a number\n");
	scanf("%d", &num);
	printf("enter a power of 2\n");
	scanf("%d", &n);

	printf("num * (2 ^ %d) = %d\n", n, num << n);
	printf("num / (2 ^ %d) = %d\n", n, num >> n);

	return 0;
}