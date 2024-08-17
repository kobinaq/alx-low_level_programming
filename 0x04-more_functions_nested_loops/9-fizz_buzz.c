#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for number between zero and nine
 * @c: input letter
 * Return: 1 is c is uppercase and 0 otherwise
 */

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; i++)
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
	printf("\n");  // Print a newline after the loop ends

	return (0);
}


