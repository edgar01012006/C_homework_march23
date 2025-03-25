#include <stdio.h>

int main()
{
	int n = 0;
	int num = 0;
	int bit_mask = 1;

	printf("enter a number\n");
	scanf("%d", &num);
	printf("enter an index\n");
	scanf("%d", &n);

	num = (num | (bit_mask << n));

	printf("num = %d\n", num);

	return 0;
}