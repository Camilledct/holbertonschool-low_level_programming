#include <stdio.h>

/**
* main - entry point
*
*
* Return: always return 0
*
*/
int main(void)
{
	int number = 0;
	char alphabet[16] = "0123456789abcdef";

	while (number < 16)
	{
		putchar(alphabet[number]);
		number++;
	}
	putchar('\n');
	return (0);
}
