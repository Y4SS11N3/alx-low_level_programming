#include "main.h"

/**
 * puts2 - Function that prints every other character of a string
 * @s: input string
 * Return: none
 */

void puts2(char *s)
{
	int idx = 0; /* Index for string traversal */

	while (s[idx] != '\0')
	{
		if (idx % 2 == 0)
			_putchar(s[idx]);
		idx++;
	}
	_putchar('\n');
}
