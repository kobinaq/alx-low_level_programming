#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always (0)
 */
	int main(void)
{
	int integerType;
	long int longintegerType;
	long long int longlongintegerType;
	float floatType;
	char charType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintegerType));
	printf("Size of a long long int: %lu byte(s)\n",
		sizeof(longlongintegerType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
