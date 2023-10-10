#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers.
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	unsigned long int counter, fib1, fib2, fibNext;
	unsigned long int fib1_1, fib1_2, fib2_1, fib2_2;
	/*
	 * Variables for iteration, Fibonacci numbers,
	 * and auxiliary variables for large numbers
	 */

	fib1 = 1;
	fib2 = 2;

	printf("%lu", fib1);

	for (counter = 1; counter < 91; counter++)
	{
		printf(", %lu", fib2);
		fibNext = fib2 + fib1;
		fib1 = fib2;
		fib2 = fibNext;
	}

	fib1_1 = fib1 / 1000000000;
	fib1_2 = fib1 % 1000000000;
	fib2_1 = fib2 / 1000000000;
	fib2_2 = fib2 % 1000000000;

	for (counter = 92; counter < 99; ++counter)
	{
		printf(", %lu", fib2_1 + (fib2_2 / 1000000000));
		printf("%lu", fib2_2 % 1000000000);
		fibNext = fib2_1 + fib1_1;
		fib1_1 = fibNext - fib1_1;
		fibNext = fib2_2 + fib1_2;
		fib1_2 = fibNext - fib1_2;
	}

	printf("\n");

	return (0);
}

