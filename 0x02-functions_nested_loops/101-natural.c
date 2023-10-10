#include <stdio.h>

/**
 * main - Calculates and prints the sum of multiples of 3 or 5 below 1024.
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	unsigned long int sumMultiples3, sumMultiples5, totalSum;
	int counter;

	sumMultiples3 = 0;
	sumMultiples5 = 0;
	totalSum = 0;

	for (counter = 0; counter < 1024; ++counter)
	{
		if ((counter % 3) == 0)
		{
			sumMultiples3 = sumMultiples3 + counter;
		}
		else if ((counter % 5) == 0)
		{
			sumMultiples5 = sumMultiples5 + counter;
		}
	}
	totalSum = sumMultiples3 + sumMultiples5;
	printf("%lu\n", totalSum);
	return (0);
}
