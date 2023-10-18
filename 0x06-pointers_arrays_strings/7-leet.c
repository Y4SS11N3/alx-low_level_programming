#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int idx = 0; /* idx is the iterator for the string */
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int leet_idx; /* leet_idx is the iterator for the leet letters and numbers */

	while (str[idx] != '\0')
	{
		for (leet_idx = 0; leet_idx < 10; leet_idx++)
		{
			if (str[idx] == letters[leet_idx])
			{
				str[idx] = numbers[leet_idx];
				break;
			}
		}
		idx++;
	}
	return (str);
}
