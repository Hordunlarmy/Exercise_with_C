#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[100];

	printf("What is the input string : ");
	fgets(str, sizeof(str), stdin);

	if (str[0] == '\n')
	{
		printf("Input cannot be empty, Please enter a string\n");
	}
	else
	{
		printf("%s has %zu characters", str, strlen(str) - 1);
	}

	return (0);
}
