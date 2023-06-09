#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int sum(int a, int b);
int diff(int a, int b);
int prod(int a, int b);
int quo(int a, int b);
int nondigits(char *digits);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char firstNum[10], secondNum[10];
	int numOne, numTwo;

	printf("What is the first number: ");
	scanf("%[^\n]%*c", firstNum);

	if (firstNum[0] == '\0')
	{
		printf("Input cannot be empty, enter a number\n");
		return (-1);
	}

	numOne = atoi(firstNum);
	if (numOne < 0 )
	{
		printf("Sorry, we dont take negative numbers.\n");
		return (-1);
	}

	if (nondigits(firstNum) == -1)
		return (-1);

	printf("What is the second number: ");
	scanf("%[^\n]%*c", secondNum);

	if (secondNum[0] == '\0')
	{
		printf("Input cannot be empty, enter a number\n");
		return (-1);
	}

	numTwo = atoi(secondNum);
	if (numTwo < 0)
	{
		printf("Sorry, we dont take negative numbers.\n");
		return (-1);
	}

	if (nondigits(secondNum) == -1)
		return (-1);

	sum(numOne, numTwo);
	diff(numOne, numTwo);
	prod(numOne, numTwo);
	quo(numOne, numTwo);

	return (0);
}

/**
 * sum - Prints the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0 (Success)
 */
int sum(int a, int b)
{
	printf("%d + %d = %d\n", a, b, (a + b));
	return (0);
}


/**
 * diff - prints the difference between two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0 (Success)
 */
int diff(int a, int b)
{
	printf("%d - %d = %d\n", a, b, (a - b));
	return(0);
}


/**
 * prod - Prints the products of two numbers 
 * @a: first number
 * @b: second number
 * Return: Always 0 (Success)
 */
int prod(int a, int b)
{
	printf("%d * %d = %d\n", a, b, (a * b));
	return (0);
}


/**
 * sum - Prints the quotient of two numbers
 * @a: first number
 * @b: second number
 * Return: Always 0 (Success)
 */
int quo(int a, int b)
{
	printf("%d / %d = %d\n", a, b, (a / b));
	return(0);
}
