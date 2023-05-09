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
	int i;

	printf("What is the input string : ");

	/**
	 * used this scanset%[] scanf method because scanf wouldnt handle
	 * empty string(doesnt read spaces)
	 */
	scanf("%[^\n]%*c", str);

	if (str[0] == '\0')
		printf("Input cannot be empty, Please enter a string\n");

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			printf("%s has %zu characters", str, strlen(str));
			break;
		}
		else
		{
			printf("Enter string without spaces\n");
			break;
		}
		/* brb to handle trailling spaces */

	}
	return (0);
}
