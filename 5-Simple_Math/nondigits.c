#include <stdio.h>
#include <ctype.h>

/**
 * nondigits - checks if input is non numeric
 * @digits: string being checked
 * Return: return 0 if a number and -1 if not
 */
int nondigits(char *digits)
{
	int i;
	for (i = 0; digits[i] != '\0'; i++)
	{
		if(!(isdigit(digits[i])) )
		{
			printf("Mate, %s is not a number\n", digits);
			return (-1);

		}
	}
	return (0);
}
