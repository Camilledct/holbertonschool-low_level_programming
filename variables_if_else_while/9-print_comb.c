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


	while (number <= 9)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}
