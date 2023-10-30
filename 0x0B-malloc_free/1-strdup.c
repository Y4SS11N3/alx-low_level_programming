#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a copied string.
 * @str: The input string.
 *
 * Return: Pointer to the new string, or NULL if fails or str is NULL.
 */
char *_strdup(char *str)
{
	char *out_str;
	unsigned int idx, jdx;

	if (str == NULL)
		return (NULL);

	for (idx = 0; str[idx] != '\0'; idx++)
		;

	out_str = (char *)malloc(sizeof(char) * (idx + 1));

	if (out_str == NULL)
		return (NULL);

	for (jdx = 0; jdx <= idx; jdx++)
		out_str[jdx] = str[jdx];

	return (out_str);
}
