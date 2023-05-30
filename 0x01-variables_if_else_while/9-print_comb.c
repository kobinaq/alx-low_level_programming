#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (0)
 */
int main(void)
{
	putchar('0');
	for (int i = '1'; i <= '9'; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i);
	}
	putchar('\n');
	return (0);
}
