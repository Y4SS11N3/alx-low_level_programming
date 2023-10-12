#include "main.h"

/**
 * more_numbers - prints numrs betwen 0 - 14, 10 times.
 * Return: void
 */
void more_numbers(void)
{
	int lineCount, num;

	for (lineCount = 0; lineCount < 10; lineCount++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + 48);
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}

