#include "main.h"
#include <ctype.h>


/**
* _islower - check if character is lowercase
* @c: character to check
* Return: 1 if lowercase else 0
*/
int _islower(int c)
{
	int result = islower(c);

	if (result == 0)
	{
		return (0);
	}

	return (1);
}
