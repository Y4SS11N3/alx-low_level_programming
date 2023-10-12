#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line.
 *
 * Return: void
 */
void print_numbers(void)
{
	int numr; /* 'numr' iterates over the numbers from 0 to 9 */

	for (numr = '0'; numr <= '9'; numr++)
	{
		_putchar(numr);
	}
	_putchar('\n');
}

