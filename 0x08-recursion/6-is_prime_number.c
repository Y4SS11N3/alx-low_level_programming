#include "main.h"

int chk_prime(int n, int i);

/**
 * check_div - Checks if a number is prime
 * @n: The number to check.
 * @val: The current divisor.
 * Return: 1 if prime, otherwise 0.
 */
int check_div(int n, int val)
{
	if (val % n == 0)
	{
		return (0);
	}
	else if (val / 2 > n)
	{
		return (check_div(n + 2, val));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check.
 * Return: 1 if prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (check_div(3, n));
	}
}
