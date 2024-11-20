#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function
 * @argc: arguments counts
 * @argv: arguments values
 * Return: Sucess 0
 */
int main(int argc, char *argv[])
{

	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
