#include "main.h"

/**
 * _puts - outputs a string to stdout
 * @str: the string to output
 * Return: void
 */

void _puts(char *str)
{
	int index = 0; /* a variable to keep track of the current character index */

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
