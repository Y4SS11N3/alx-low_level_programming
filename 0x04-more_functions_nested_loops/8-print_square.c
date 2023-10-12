#include "main.h"

/**
 * print_square - function draws a square of a given size on termianl.
 * @size: The length/width of the square
 * Return: void
 */
void print_square(int size)
{
	int r_count, c_count;

	if (size > 0)
	{
		for (r_count = 0; r_count < size; r_count++)
		{
			for (c_count = 0; c_count < size; c_count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
