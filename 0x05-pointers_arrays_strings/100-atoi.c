#include "main.h"

/**
 * _atoi - Transforms a string into an integer.
 * @s: Source string.
 * Return: Resulting integer.
 */
int _atoi(char *s)
{
	unsigned int str_idx = 0, num_size = 0, output_int = 0;
	int sgn = 1, mlp = 1;
	unsigned int i; /* Changed from int to unsigned int */

	while (*(s + str_idx) != '\0')
	{
		if (num_size > 0 && (*(s + str_idx) < '0' || *(s + str_idx) > '9'))
			break;
		if (*(s + str_idx) == '-')
			sgn *= -1;
		if ((*(s + str_idx) >= '0') && (*(s + str_idx) <= '9'))
		{
			if (num_size > 0)
				mlp *= 10;
			num_size++;
		}
		str_idx++;
	}
	for (i = str_idx - num_size; i < str_idx; i++)
	{
		output_int = output_int + ((*(s + i) - 48) * mlp);
		mlp /= 10;
	}
	return (output_int * sgn);
}
