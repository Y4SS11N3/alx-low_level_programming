#include "variadic_functions.h"

/**
 * print_numbers - displays numbers.
 * @separator: string to be displayed between numbers.
 * @n: count of integers passed to the function.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	/* idx: index for iteration */
	unsigned int idx;

	va_start(valist, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && idx < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
