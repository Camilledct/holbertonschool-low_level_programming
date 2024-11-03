#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			if (i + 1 < size - j)
				_putchar(' ');
			else
				_putchar('#');

		_putchar('\n');
	}
}
