#include <stdio.h>
/**
 *main - entry point
 *Return: always 0 (Sucess)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
