#include "main.h"

/**
 * binary_to_uint - Converts binary string to unsigned integer.
 * @b: Pointer to string of '0' and '1' characters.
 *
 * Return: Converted number,or 0 if string has non-binary characters or is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0; /* Converted number */
	int str_len = 0; /* Length of the string */
	int multiplier = 1; /* Base 2 multiplier */

	if (!b)
		return (0);

	/* Calculate the length of the string */
	while (b[str_len])
		str_len++;

	/* Convert binary string to unsigned integer */
	for (str_len--; str_len >= 0; str_len--, multiplier *= 2)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);

		if (b[str_len] == '1')
			num += multiplier;
	}

	return (num);
}
