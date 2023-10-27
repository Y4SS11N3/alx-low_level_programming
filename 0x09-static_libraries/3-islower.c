#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: ASCII character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	int lower_check; /* variable to hold the result */

	if (c >= 'a' && c <= 'z')
	{
		lower_check = 1;
	}
	else
	{
		lower_check = 0;
	}

	return (lower_check);
}

