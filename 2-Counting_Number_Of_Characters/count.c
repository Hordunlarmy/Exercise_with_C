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
	scanf("%s", str);
	printf("%s has %lu characters", str, strlen(str));

	return (0);
}
