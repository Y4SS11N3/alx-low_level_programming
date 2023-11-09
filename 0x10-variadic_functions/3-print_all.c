#include "variadic_functions.h"

/**
 * print_all - This function prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int idx = 0, jdx, f = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[idx])
	{
		jdx = 0;
		while (t_arg[jdx])
		{
			if (format[idx] == t_arg[jdx] && f)
			{
				printf(", ");
				break;
			} jdx++;
		}
		switch (format[idx])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), f = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), f = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), f = 1;
			break;
		case 's':
			str = va_arg(valist, char *), f = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} idx++;
	}
	printf("\n"), va_end(valist);
}
