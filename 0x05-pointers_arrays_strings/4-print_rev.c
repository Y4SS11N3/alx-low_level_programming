#include "main.h"

/**
 * print_rev - Function that reverses a given string
 * @s: input string
 * Return: none
 */

void print_rev(char *s)
{
	int idx = 0; /* Index for string traversal */

	while (s[idx] != '\0')
	{
		idx++;
	}
	idx--;

	while (idx >= 0)
	{
		_putchar(s[idx]);
		idx--;
	}
	_putchar('\n');
}
