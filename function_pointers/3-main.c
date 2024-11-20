#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (argv[2][0] != '+' &&
		argv[2][0] != '-' &&
		argv[2][0] != '*' &&
		argv[2][0] != '/' &&
		argv[2][0] != '%')
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
}