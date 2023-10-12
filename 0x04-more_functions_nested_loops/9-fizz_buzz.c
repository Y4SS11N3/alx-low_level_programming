#include "main.h"
#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
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
