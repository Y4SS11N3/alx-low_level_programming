#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int numr;

	for (numr = 1; numr < 100 ; numr++)
	{
		if (numr % 3 == 0 && numr % 5 == 0)
			printf("FizzBuzz ");
		else if (numr % 3 == 0)
			printf("Fizz ");
		else if (numr % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", numr);
	}
	printf("Buzz\n");

	return (0);
}
