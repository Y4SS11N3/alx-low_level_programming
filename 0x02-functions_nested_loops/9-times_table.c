#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: None
 */
void times_table(void)
{
	int Row_numr, Col_numr, Prod_numr, Tens_Dig, Ones_Dig;

	for (Row_numr = 0; Row_numr <= 9; Row_numr++)
	{
		for (Col_numr = 0; Col_numr <= 9; Col_numr++)
		{
			Prod_numr = Row_numr * Col_numr;
			Tens_Dig = Prod_numr / 10;
			Ones_Dig = Prod_numr % 10;

			if (Col_numr == 0)
			{
				_putchar('0');
			}
			else if (Prod_numr < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(Ones_Dig + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(Tens_Dig + '0');
				_putchar(Ones_Dig + '0');
			}
		}
		_putchar('\n');
	}
}

