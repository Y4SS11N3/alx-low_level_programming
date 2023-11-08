#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quotient of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the quotient of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the modulus of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the modulus of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
