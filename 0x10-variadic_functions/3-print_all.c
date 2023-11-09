#include "variadic_functions.h"

/**
 * print_all - displays anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	/* idx: index for iteration */
	unsigned int idx = 0, j, flag = 0;
	/* txt: current string */
	char *txt;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[idx])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[idx] == t_arg[j] && flag)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[idx])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), flag = 1;
			break;
		case 's':
			txt = va_arg(valist, char *), flag = 1;
			if (!txt)
			{
				printf("(nil)");
				break;
			}
			printf("%s", txt);
			break;
		} idx++;
	}
	printf("\n"), va_end(valist);
}
