#include <stdio.h>
/**
 *main - Entry point
 *
 * Return: 0 means success
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);

	putchar('\n');
	return (0);
}
