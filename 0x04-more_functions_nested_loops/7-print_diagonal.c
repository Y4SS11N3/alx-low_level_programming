#include "main.h"

/**
 * print_diagonal - function draws a diagonal line on terminal.
 * @n: The number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int l_count, s_count;

	if (n > 0)
	{
		for (l_count = 0; l_count < n; l_count++)
		{
			for (s_count = 0; s_count < l_count; s_count++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
