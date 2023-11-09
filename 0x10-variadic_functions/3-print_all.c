#include "variadic_functions.h"

/*
 * print_all - exhibits any type of data.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	/* 'valist' is the variable argument list */
	va_list valist;
	/* 'idx' is the index for iteration, 'jdx' is the secondary index for iteration, 'flag' is a flag variable */
	unsigned int idx = 0, jdx, flag = 0;
	/* 'txt' is a pointer to a string */
	char *txt;
	/* 't_arg' is a list of argument types */
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[idx])
	{
		jdx = 0;
		while (t_arg[jdx])
		{
			if (format[idx] == t_arg[jdx] && flag)
			{
				printf(", ");
				break;
			}
			jdx++;
		}
		switch (format[idx])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			flag = 1;
			break;
		case 's':
			txt = va_arg(valist, char *);
			flag = 1;
			if (!txt)
			{
				printf("(nil)");
				break;
			}
			printf("%s", txt);
			break;
		}
		idx++;
	}
	printf("\n");
	va_end(valist);
}
