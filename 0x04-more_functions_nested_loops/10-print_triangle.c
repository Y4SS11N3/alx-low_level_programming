#include "main.h"

/**
 * print_triangle - function that prints a triangle and followed by a new line
 * on terminal.
 * @size: The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int r_count, c_count, s_count;

	if (size > 0)
	{
		for (r_count = size, s_count = size - 1; r_count > 0; r_count--, s_count--)
		{
			for (c_count = 1; c_count <= size; c_count++)
			{
				if (c_count <= s_count)
					_putchar(' ');
				else
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
