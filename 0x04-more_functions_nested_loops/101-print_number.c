#include "main.h"

/**
 * print_number - Function to display an integer.
 * @n: The integer to be printed.
 * Return: Does not return a value.
 */
void print_number(int n)
{
	unsigned int numr; /* "numr" is the absolute value of n */
	unsigned int dig; /* "dig" is the current digit to print */
	unsigned int cnt; /* "cnt" is used to extract each digit */

	if (n < 0)
	{
		_putchar(45);
		numr = n * -1;
	}
	else
	{
		numr = n;
	}

	dig = numr;
	cnt = 1;

	while (dig > 9)
	{
		dig /= 10;
		cnt *= 10;
	}

	for (; cnt >= 1; cnt /= 10)
	{
		_putchar(((numr / cnt) % 10) + 48);
	}
}
