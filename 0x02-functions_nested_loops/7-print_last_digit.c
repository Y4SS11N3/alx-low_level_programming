#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @numr: Integer to get the last digit from
 *
 * Return: Last digit of numr
 */
int print_last_digit(int numr)
{
	int last_dig = numr % 10;

	if (numr < 0)
		last_dig = -last_dig;

	_putchar(last_dig + '0');

	return (last_dig);
}
