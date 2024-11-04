#include "main.h"
#include <string.h>
/**
*rev_string - Write a function that reverses a string
*@s: string to be reversed
*/
void rev_string(char *s)
{
	int first = 0;
	int last = strlen(s) - 1;
	char temp;

	while (first < last)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
		first++;
		last--;
	}
}
