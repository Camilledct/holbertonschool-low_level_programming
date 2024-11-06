#include "main.h"
/**
*reverse_array - a function that reverses the content of an array of integers.
*@n: is the number of elements of the array
*@a:an array of integers
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
