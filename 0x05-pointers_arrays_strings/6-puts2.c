#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character,
 *         followed by a new line.
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	/* Iterate over the string */
	while (str[i] != '\0')
	{
		/* Print character at even index */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
