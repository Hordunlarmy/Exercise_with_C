#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *noun = malloc (sizeof(char) * 100);
	char *verb = malloc (sizeof(char) * 100);
	char *adj = malloc (sizeof(char) * 100);
	char *adv = malloc (sizeof(char) * 100);
	char *story = malloc (sizeof(char) * 1000);
	int choice = 1;

	while (choice == 1)
	{

		printf("Enter a noun: ");
		scanf("%s", noun);
		printf("Enter a verb: ");
		scanf("%s", verb);
		printf("Enter an adjective: ");
		scanf("%s", adj);
		printf("Enter an adverb: ");
		scanf("%s", adv);
		printf("\tCOMPILING..........\n");
		sleep(8);
		sprintf(story, "Every year, I %s %s my %s %s out the window", adv, verb, adj, noun);
		printf("%s\n", story);
		sleep(5);
		printf("\tWait!!, WHAT??\nThat was hilarious!, Wanna go again?\n");
		sleep(5);
		printf("Enter 2 to continue the story, 1 to start over OR 0 to stop: ");
		scanf("%d", &choice);

		if (choice == 2)
		{
			printf("Nice, LETS GOoo..\n");

			printf("Enter a noun: ");
			scanf("%s", noun);
			printf("Enter a verb: ");
			scanf("%s", verb);
			printf("Enter an adjective: ");
			scanf("%s", adj);
			printf("Enter an adverb: ");
			scanf("%s", adv);
			printf("\tCOMPILING..........\n");
			sleep(8);
			printf("%s, thats nothing compared to how i %s %s my %s %s though", story, adv, verb, adj, noun);
			break;

		}

		if (choice == 0)
			break;
	}


	free(noun);
	free(verb);
	free(adj);
	free(adv);
	free(story);

	return (0);
}
