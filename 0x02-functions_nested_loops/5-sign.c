#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Integer to check
 *
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */
int print_sign(int n)
{
	int sign_num; /* variable to hold the sign */

	if (n > 0)
	{
		_putchar('+');
		sign_num = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		sign_num = -1;
	}
	else
	{
		_putchar('0');
		sign_num = 0;
	}

	return (sign_num);
}

