#include "main.h"

/**
 * print_times_table - Prints the 'n' times table up to 'n'.
 * @n: The upper limit of the times table.
 *
 * Description: This function prints the times table for a given number 'n'.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int rw, col, prod; /* Variables for rows, columns, and product */

	if (n >= 0 && n < 15)
	{
		for (rw = 0; rw <= n; rw++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = rw * col;

				if (col == 0)
					_putchar('0');
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else if (prod > 99 && prod < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(prod / 100 + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
