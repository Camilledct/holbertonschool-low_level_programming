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
	char alphabet_lower = 'a';
	char alphabet_upper = 'A';

	while (alphabet_lower <= 'z')
	{
		putchar(alphabet_lower);
		alphabet_lower++;
	}
	while (alphabet_upper <= 'Z')
	{
		putchar(alphabet_upper);
		alphabet_upper++;
	}
	putchar('\n');

	return (0);
}
