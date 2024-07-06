#include <stdio.h>

/**
  *main - Entry point
  *Return: Always 0
  */

int main(void)
{
	int a = 0;
	int b = 0;
	int count = 0;

	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			if (count > 0)
			{	
			putchar(' ');
			putchar(',');
			}
			putchar(a + '0');
			putchar(b + '0');
			b++;
			count++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
