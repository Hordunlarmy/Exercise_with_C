#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[100];

	printf("What is your name : ");
	scanf("%s", str);
	printf("Hello, %s, nice to meet you\n", str);

	return (0);
}
