#include <stdio.h>
/**
 *main - Entry point
 *Return: 0 means success
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
