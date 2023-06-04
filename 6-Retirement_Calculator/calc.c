#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char currentAge[100];
	char retireAge[100];
	int current, retire, year, diff;
	time_t currentTime;
	time(&currentTime);
	struct tm *localTime = localtime(&currentTime);

	printf("What is your current age? ");
	scanf("%[^\n]%*c", currentAge);
	printf("At what age would you like to retire? ");
	scanf("%[^\n]%*c", retireAge);

	current = atoi(currentAge);
	retire = atoi(retireAge);
	year = localTime->tm_year + 1900;
	diff = retire - current;

	if (diff == 0)
	{
		printf("\nCongratulations, you are retiring this year (%d)\n", year);

	}
	else if (diff < 0)
	{
		printf("\nYou should have retired %d years ago\n", (diff * -1));
		printf("It's %d, you should have retired "
				"in %d\n", year, (year - (diff * -1)) );
	}
	else
	{
		printf("\nYou have %d years left until you can retire.\n", diff);
		printf("It's %d, so you can retire in %d", year, (year + diff) );
	}
	return (0);
}
