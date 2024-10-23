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
	char reverse_alphabet = 'z';

	while (reverse_alphabet >= 'a')
	{
		putchar(reverse_alphabet);
		reverse_alphabet--;
	}
	putchar('\n');
	return (0);
}
