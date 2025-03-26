#include <stdio.h>

int main()
{
	int num = 0;
	int n = 0;
	int mask = 0;

	printf("enter a number\n");
	scanf("%d", &num);
	printf("enter a mask\n");
	scanf("%d", &mask);
	printf("enter the n\n");
	scanf("%d", &n);

	num = (num & (mask << n));
	printf("num = %d\n", num);

	return 0;
}