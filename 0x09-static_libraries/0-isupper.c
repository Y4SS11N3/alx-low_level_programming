#include "main.h"

/**
 * _isupper - A function that verifies if a character is an uppercase letter.
 * @c: The character to be verified
 * Return: 1 if c is an uppercase letter, if no 0
 */
int _isupper(int c)
{
	char uper = 'A'; /* 'uper' iterates over all uppercase letters */
	int isuper = 0; /* 'isuper' is a flag variable that stores the result */

	for (; uper <= 'Z'; uper++)
	{
		if (c == uper)
		{
			isuper = 1;
			break;
		}
	}

	return (isuper);
}

