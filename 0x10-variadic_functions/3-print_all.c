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
	unsigned int idx = 0, jdx, flag = 0;
	char *txt;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[idx])
	{
		jdx = 0;
		while (t_arg[jdx] && format[idx] != t_arg[jdx])
		{
			jdx++;
		}
		if (jdx < 4 && flag)
		{
			printf(", ");
		}
		txt = (format[idx] == 's') ? va_arg(valist, char *) : NULL;
		if (txt == NULL && format[idx] == 's')
		{
			txt = "(nil)";
		}
		if (jdx < 4)
		{
			printf((jdx < 3) ? "%c%d%f" + jdx * 2 : "%s",
				(jdx == 0) ? va_arg(valist, int) :
				(jdx == 1) ? va_arg(valist, int) :
				(jdx == 2) ? va_arg(valist, double) : txt);
			flag = 1;
		}
		idx++;
	}
	printf("\n");
	va_end(valist);
}
