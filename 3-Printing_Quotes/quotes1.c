#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	quotes *head = malloc(sizeof(quotes));
	quotes *quote3 = malloc(sizeof(quotes));
	quotes *quote4 = malloc(sizeof(quotes));

	strcpy(head->quote, "Be the change that you wish to see in the world.");
	strcpy(head->author, "Mahatma Gandhi");
	head->next = NULL;

	head->next = malloc(sizeof(quotes));
	strcpy(head->next->quote, "The way to get started "
			"is to quit talking and begin doing.");
	strcpy(head->next->author, "Walt Disney");
	head->next->next = NULL;

	head->next->next = quote3;
	strcpy(quote3->quote, "Believe you can and you're halfway there.");
	strcpy(quote3->author, "Theodore Roosevelt");
	quote3->next = NULL;

	head->next->next->next = quote4;
	strcpy(quote4->quote, "It does not matter how slowly you go as long as you do not stop.");
	strcpy(quote4->author, "Confucius");
	quote4->next = NULL;

	printf("\t Quotes For You\n");
	printf("%s says, \"%s\"\n", head->author, head->quote);
	printf("%s says, \"%s\"\n", head->next->author, head->next->quote);
	printf("%s says, \"%s\"\n", quote3->author, quote3->quote);
	printf("%s says, \"%s\"\n", quote4->author, quote4->quote);

	/* Need More Work */
	return (0);
}
