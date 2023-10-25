#include "main.h"

/**
 * factorial - Computes the factorial of n.
 * @n: The number to compute the factorial of.
 * Return: The factorial of n.
 */
int factorial(int n)
{
	int num = n; /* 'num' is the current number in the computation */

	if (num < 0)
	{
		return (-1);
	}
	if (num == 1)
	{
		return (1);
	}
	return (num * factorial(num - 1));
}
