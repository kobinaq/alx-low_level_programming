#include <stdio.h>
/**
 *main - entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int a = '0';
	char c = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
