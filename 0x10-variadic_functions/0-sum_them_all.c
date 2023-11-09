#include "variadic_functions.h"

/**
 * sum_them_all - calculates the total of all its arguments.
 * @n: number of the arguments.
 *
 * Return: total of its arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	/* idx: index for iteration */
	unsigned int idx;
	/* total: sum of arguments */
	int total = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (idx = 0; idx < n; idx++)
		total += va_arg(valist, int);

	va_end(valist);

	return (total);
}
