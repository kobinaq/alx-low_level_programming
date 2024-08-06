#include <stdio.h>

/**
 * put_two_digits - Prints a number with two digits
 * main - Entry point
 * Return: Always 0
 * @n: input digit
 */

void put_two_digits(int n)
{
	putchar(n / 10 + '0');
	putchar(n % 10 + '0');
}

int main(void)
{
	int i = 0;
	int j;

	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			put_two_digits(i);
			putchar(' ');
			put_two_digits(j);

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

