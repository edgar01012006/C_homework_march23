#include <stdio.h>

int main()
{
	char c = '\0';
	int bit_mask = 5;

	printf("enter a character\n");
	scanf(" %c", &c);

	if ((c | (1 << bit_mask)) == c)
	{
		c = (c ^ (1 << bit_mask));
		printf("%c\n", c);
	}
	else
	{
		c = (c | (1 << bit_mask));
		printf("%c\n", c);
	}
	
	return 0;
}