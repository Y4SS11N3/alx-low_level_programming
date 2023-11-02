#include "main.h"

/**
 * _fillStr - Fill a string with a character
 * @str: The string to fill
 * @fCh: The character to fill with
 * @num: The number of bytes to fill
 * Return: The filled string
 */
char *_fillStr(char *str, char fCh, unsigned int num)
{
	unsigned int idx; /* Index used for iteration */

	for (idx = 0; idx < num; idx++)
	{
		str[idx] = fCh;
	}
	return (str);
}

/**
 * _calloc - Allocates zeroed memory for an array using malloc
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr; /* Pointer to the allocated memory */

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	_fillStr(ptr, 0, (nmemb * size));
	return ((void *)ptr);
}
