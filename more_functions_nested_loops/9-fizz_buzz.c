#include <stdio.h>
/**
*main - Write a program that prints the numbers from 1 to 100, (\n)
* for multiples of 3 print Fizz instead of the num and for the multiples of 5
* print Buzz.
* For numbers which are multiples of both three and five print FizzBuzz.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}

	}
	printf("\n");
}
