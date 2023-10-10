#include <stdio.h>

/**
 * main - Outputs the first 50 numbers in the Fibonacci sequence.
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	long int fib1, fib2, fibNext, counter; /* Variables for Fibonacci numbers and loop counter */

	fib1 = 1;
	fib2 = 2;

	for (counter = 1; counter <= 50; ++counter)
	{
		if (fib1 != 20365011074)
		{
			printf("%ld, ", fib1);
		}
		else
		{
			printf("%ld\n", fib1);
		}

		fibNext = fib1 + fib2;
		fib1 = fib2;
		fib2 = fibNext;
	}

	return (0);
}
