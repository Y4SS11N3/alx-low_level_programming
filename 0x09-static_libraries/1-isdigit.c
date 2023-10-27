#include "main.h"

/**
 * _isdigit - checks if parameter c is a digit between 0 to 9.
 * @c: input character.
 * Return: 1 if c is a digit, if no 0
 */
int _isdigit(int c)
{
	int l_limit = 48; /* 'l_limit' represents the ASCII value of 0 */
	int u_limit = 57; /* 'u_limit' represents the ASCII value of 9 */

	if (c >= l_limit && c <= u_limit)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
