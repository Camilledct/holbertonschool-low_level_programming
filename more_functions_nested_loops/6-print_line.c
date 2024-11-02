#include "main.h"

/**
* print_line - n is the number of times the character _ should be printed
*@n: number of times
*The line should end with a \n
*If n is 0 or less, the function should only print \n
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
