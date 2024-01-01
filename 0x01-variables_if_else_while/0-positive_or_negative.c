#include <stdio.h>
#include <time.h>

/**
 *main - entry point
 *n - integer to be tested
 *Return: 0 means success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
