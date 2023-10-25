#include "main.h"

/**
 * _sqrt_recursion - Computes the natural square root
 * @n: The number to compute the square root of.
 * Return: The natural square root if exists, otherwise -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Helper function for _sqrt_recursion
 * @n: The number to compute the square root of.
 * @idx: The current index.
 * Return: The natural square root if exists, otherwise -1.
 */
int _sqrt(int n, int idx)
{
	if (n < 0)
		return (-1);
	if ((idx * idx) > n)
		return (-1);
	if (idx * idx == n)
		return (idx);
	return (_sqrt(n, idx + 1));
}
