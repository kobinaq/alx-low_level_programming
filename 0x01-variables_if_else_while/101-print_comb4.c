#include <stdio.h>

/**
 *main - Entry point
 *Return: It's Always 0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int count = 0;

	while (a < 8)
	{
		b = a + 1;
		while (b < 9)
		{
			c = b + 1;
			while (c < 10)
			{
				if (count > 0)
					putchar (',');
					putchar(' ');
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				count++;
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
