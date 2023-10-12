#include "main.h"

/**
 * print_most_numbers - prints numers from 0 to 9, excludig 2 and 4,
 * folowed by a new line.
 * Return: void
 */
void print_most_numbers(void)
{
	int numr; /* 'numr' iterates over the numbers from 0 to 9 */

	for (numr = '0'; numr <= '9'; numr++)
	{
		if (numr != '2' && numr != '4')
			_putchar(numr);
	}
	_putchar('\n');
}

