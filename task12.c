#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	char c = '\0';
	char c_copy = '\0';
	int res = 0;

	printf("enter the first number\n");
	scanf("%d", &num1);
	printf("enter the second number\n");
	scanf("%d", &num2);

	do
	{
		printf("enter a bitwise operation(1st character)\n");
		scanf(" %c", &c);
		c_copy = c;

		if (c == '<' || c == '>')
		{
			printf("enter it again(2nd character)\n");
			scanf(" %c", &c);

			if (c == c_copy)
			{
				break;
			}	
		}	
	}while ((c != '|') && (c != '&') && (c != '^'));

	switch (c)	
	{
		case '|':
			res = (num1 | num2);
			break;
		case '&':
			res = (num1 & num2);
			break;
		case '^':
			res = (num1 ^ num2);
			break;
		case '>':
			res = (num1 >> num2);
			break;
		case '<': 
			res = (num1 << num2);
			break;
		default:
			printf("you didnt enter a bitwise operation\n");
	}

	printf("res = %d", res);

	return 0;
}