#include "main.h"

/**
 * _pow_recursion - Computes the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 * Return: The result of the recursion.
 */
int _pow_recursion(int x, int y)
{
	int base = x; /* 'base' is the base number in the recursion */
	int exp = y; /* 'exp' is the exponent in the recursion */

	if (exp < 0)
	{
		return (-1);
	}
	if (exp == 0)
	{
		return (1);
	}
	return (base * _pow_recursion(base, exp - 1));
}
