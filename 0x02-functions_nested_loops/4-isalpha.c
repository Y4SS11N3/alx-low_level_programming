#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic
 * @c: ASCII character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	int alpha_check; /* variable to hold the result */

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		alpha_check = 1;
	}
	else
	{
		alpha_check = 0;
	}

	return (alpha_check);
}

