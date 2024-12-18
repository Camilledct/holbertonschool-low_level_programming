#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
