#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 * @dest: the destination buffer where the string is copied to
 * @src: the source string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character from src to dest including the null byte */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';  /* Ensure the copied string is null-terminated */

	return (dest);
}

