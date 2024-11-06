#include "main.h"
/**
*rev_string - Write a function that reverses a string
*@s: string to be reversed
*/
void rev_string(char *s)
{
	int i = 0, b, c;
	char d;

	while (s[i] != '\0')
	{
		i++;
	}
	c = i - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
	}
}
