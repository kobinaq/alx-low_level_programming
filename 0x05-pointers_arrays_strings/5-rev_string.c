#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	/* Find the length of the string */
	while (s[j] != '\0')
		j++;

	j--; /* Set j to the last character index */

	/* Swap characters from the start and the end */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

