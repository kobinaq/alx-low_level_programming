#include "main.h"

/**
 * puts_half - prints the second half of a string,
 *             followed by a new line.
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting index for printing */
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2 + 1;
	}

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

