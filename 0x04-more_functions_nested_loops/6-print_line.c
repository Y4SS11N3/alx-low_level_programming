#include "main.h"

/**
 * print_line - function draws a straight line in terminal.
 * @n: The number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int prod;

	if (n > 0)
	{
		for (prod = 0; prod < n; prod++)
			_putchar('_');
	}
	_putchar('\n');
}
