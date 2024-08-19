#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to be converted
 *
 * Return: the integer value of the converted string, or 0 if no numbers
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

    /* Iterate through the string */
	while (s[i] != '\0')
	{
	/* Handle '-' and '+' signs */
		if (s[i] == '-')
        {
			sign = sign * -1;
        }
		else if (s[i] >= '0' && s[i] <= '9')
		{
			/* Convert character to integer */
			result = result * 10 + (s[i] - '0');
			tarted = 1;
		}
		else if (started)
		{
			/* Stop conversion if a non-digit is encountered after starting */
			break;
		}

		i++;
	}

	/* Apply sign to the result */
	return (result * sign);
}
