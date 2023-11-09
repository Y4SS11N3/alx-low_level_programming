#include "variadic_functions.h"

/**
 * print_strings - displays strings.
 * @separator: string to be displayed between the strings.
 * @n: count of strings passed to the function.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	/* idx: index for iteration */
	unsigned int idx;
	/* txt: current string */
	char *txt;

	va_start(valist, n);

	for (idx = 0; idx < n; idx++)
	{
		txt = va_arg(valist, char *);

		if (txt)
			printf("%s", txt);
		else
			printf("(nil)");

		if (idx < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
