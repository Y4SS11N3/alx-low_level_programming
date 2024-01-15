#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts one integer from another
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides one integer by another
 * @a: first integer
 * @b: second integer
 *
 * Return: quotient of a and b, or 0 if b is 0
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - finds the remainder of the division of one integer by another
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of a divided by b, or 0 if b is 0
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
