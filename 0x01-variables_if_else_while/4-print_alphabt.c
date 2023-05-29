#include <stdio.h>
/**
 *main - entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	char n = 'a';
		while (n <= 'z')
		{
			if (n != 'e' && n != 'q')
			putchar(n);
			n++;
		}
		putchar('\n');
	return (0);
}
