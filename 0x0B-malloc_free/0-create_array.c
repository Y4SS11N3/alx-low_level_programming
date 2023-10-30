#include "main.h"
#include <stdlib.h>

/**
 * create_array - Generates an array of chars.
 * @size: Array size.
 * @c: Initial char.
 *
 * Return: Pointer to the array, or NULL if fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int idx;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		arr[idx] = c;

	return (arr);
}
