#include "3-calc.h"

/**
 * op_add - calculates the total of two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: total of num1 and num2
 */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * op_sub - calculates the subtraction of two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: subtraction of num1 and num2
 */
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * op_mul - calculates the multiplication of two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: multiplication of num1 and num2
 */
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * op_div - calculates the quotient of two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: quotient of num1 by num2
 */
int op_div(int num1, int num2)
{
	return (num1 / num2);
}

/**
 * op_mod - calculates the modulus of two integers
 * @num1: first integer
 * @num2: second integer
 *
 * Return: modulus of num1 divided by num2
 */
int op_mod(int num1, int num2)
{
	return (num1 % num2);
}
