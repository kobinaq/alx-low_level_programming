#include <stdio.h>

/**
 *main - Entry point
 *Return: 0 means success
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
