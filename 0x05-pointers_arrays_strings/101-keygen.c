#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int sum = 0;
	int target = 2772;  /* Example target sum, it could be different */
	char password[100];
	int i = 0;
    
	srand(time(0));  /* Seed the random number generator with the current time */

	while (sum < target)
	{
		password[i] = rand() % 78 + 48;  /* Generate a random character between '0' and 'z' */
		sum += password[i];
		i++;
	}

	password[i] = '\0';  /* Null-terminate the string */

	/* If the sum exceeds the target, adjust the last character */
	if (sum != target)
	{
		int diff = sum - target;
		password[i - 1] -= diff;
	}

	printf("%s", password);  /* Print the generated password */

	return (0);
}
