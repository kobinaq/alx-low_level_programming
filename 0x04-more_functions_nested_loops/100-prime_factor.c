#include <stdio.h>

/**
 * main - Entry point, finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long number = 612852475143;
	long factor = 2;
	long largest_factor = 0;

	while (number > 1)
	{
		while (number % factor == 0)
		{
			largest_factor = factor;
			number /= factor;
		}
		factor++;
	}

	printf("%ld\n", largest_factor);
	return (0);
}

