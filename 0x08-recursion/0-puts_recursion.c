#include "main.h"

/**
 * _puts_recursion - Outputs a sequence of characters, followed by a new line.
 * @s: The sequence to be output.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	char ch = *s; /* 'ch' is the current character in the sequence */

	if (ch != '\0')
	{
		_putchar(ch);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
