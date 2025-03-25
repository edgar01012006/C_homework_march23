#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;

	printf("enter number1\n");
	scanf("%d", &num1);
	printf("enter number2\n");
	scanf("%d", &num2);

	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("num1 = %d num2 = %d\n", num1, num2);
		
	return 0;
}