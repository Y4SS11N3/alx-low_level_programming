#include "main.h"

/**
 * print_number - Outputs a given integer to the console.
 * @n: The integer that needs to be outputted.
 *
 * Description: This function takes an integer and outputs it to the console.
 * The function does not return any value.
 */
void print_number(int n)
{
	unsigned int abs_num; /* Absolute value of n */
	unsigned int tmp; /* Temporary variable */
	unsigned int dig_count; /* Variable to count the number of digits in n */

	/* tmp is used to determine the number of digits in n */

	if (n < 0)
	{
		_putchar(45);
		abs_num = n * -1;
	}
	else
	{
		abs_num = n;
	}

	tmp = abs_num;
	dig_count = 1;

	while (tmp > 9)
	{
		tmp /= 10;
		dig_count *= 10;
	}

	for (; dig_count >= 1; dig_count /= 10)
	{
		_putchar(((abs_num / dig_count) % 10) + 48);
	}
}

