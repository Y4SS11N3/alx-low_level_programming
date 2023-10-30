#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Joins two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to the new string, or NULL if fails or s1 or s2 is NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *out_str;
	unsigned int idx, jdx, kdx, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (idx = 0; s1[idx] != '\0'; idx++)
		;

	for (jdx = 0; s2[jdx] != '\0'; jdx++)
		;

	out_str = malloc(sizeof(char) * (idx + jdx + 1));

	if (out_str == NULL)
	{
		free(out_str);
		return (NULL);
	}

	for (kdx = 0; kdx < idx; kdx++)
		out_str[kdx] = s1[kdx];

	limit = jdx;
	for (jdx = 0; jdx <= limit; kdx++, jdx++)
		out_str[kdx] = s2[jdx];

	return (out_str);
}
