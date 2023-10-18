#include "main.h"

/**
 * string_toupper - Transforms all lowercase letters of a string to uppercase.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int idx = 0; /* idx is the iterator for the string */

	while (*(str + idx) != '\0')
	{
		if ((*(str + idx) >= 97) && (*(str + idx) <= 122))
			*(str + idx) = *(str + idx) - 32;
		idx++;
	}

	return (str);
}
