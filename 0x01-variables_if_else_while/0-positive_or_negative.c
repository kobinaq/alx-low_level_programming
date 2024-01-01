#include <stdio.h>

/**
 *main - entry point
 *n - integer to be tested
 *Return: 0 means success
 */

int main(void)
{
	int n = 0;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);
}
