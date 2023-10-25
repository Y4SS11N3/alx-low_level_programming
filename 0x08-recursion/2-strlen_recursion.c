#include "main.h"

/**
 * _strlen_recursion - Determines the length of a sequence of characters.
 * @s: The sequence to be measured.
 * Return: The length of the sequence.
 */
int _strlen_recursion(char *s)
{
	char ch = *s; /* 'ch' is the current character in the sequence */

	if (!ch)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
