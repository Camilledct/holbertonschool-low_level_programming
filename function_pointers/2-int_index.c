#include "function_pointers.h"
/**
* int_index - returns the index of the first element
* for which the cmp function does not return 0
* @size: the number of elements in the array array
* @cmp: a pointer to the function to be used to compare values
* @array: array of integers
* Return: The index of the first element for which the cmp function
* does not return 0, or -1 if no element matches or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
