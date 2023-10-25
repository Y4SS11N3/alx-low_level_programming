#include "main.h"

/**
 * _print_rev_recursion - Outputs a sequence of characters in reverse.
 * @s: The sequence to be output.
 *
 */
void _print_rev_recursion(char *s)
{
	char ch = *s; /* 'ch' is the current character in the sequence */

	if (ch)
	{
		_print_rev_recursion(s + 1);
		_putchar(ch);
	}
}
