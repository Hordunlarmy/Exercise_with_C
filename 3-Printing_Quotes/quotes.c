#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char quote[100];
	char author[100];

	printf("Enter quote : ");
	scanf("%[^\n]s", quote);
	printf("Who is the author? : ");
	scanf("%s", author);
	printf("%s says \"%s\"", author, quote);

}
