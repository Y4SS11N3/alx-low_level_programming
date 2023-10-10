#include <stdio.h>

/**
 * main - Prints sum of even Fibonacci terms under 4,000,000.
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int counter;
	unsigned long int term1, term2, termNext, evenSum;
	/*
	 * Variables for the current term, next term,
	 * and the sum of even terms
	 */

	term1 = 1;
	term2 = 2;
	evenSum = 0;

	for (counter = 1; counter <= 33; ++counter)
	{
		if (term1 < 4000000 && (term1 % 2) == 0)
		{
			evenSum = evenSum + term1;
		}
		termNext = term1 + term2;
		term1 = term2;
		term2 = termNext;
	}

	printf("%lu\n", evenSum);

	return (0);
}
