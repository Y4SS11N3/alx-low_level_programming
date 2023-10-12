#include <stdio.h>

/**
 * main - Program to find the largest prime factor of 612852475143.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int count = 3; /* loop counter */
	unsigned long int numr = 612852475143; /* "numr" is the number to factorize */

	for (; count < 12057; count += 2)
	{
		while (numr % count == 0 && numr != count)
			numr /= count;
	}
	printf("%lu\n", numr);
	return (0);
}

