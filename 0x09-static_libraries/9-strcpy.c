#include "main.h"

/**
 * _strcpy - Function that duplicates the string pointed to by src into dest
 * @dest: destination string
 * @src: source string
 * Return: char with duplicate of string
 */

char *_strcpy(char *dest, char *src)
{
	int idx; /* Index for string traversal */

	for (idx = 0; *(src + idx) != '\0'; idx++)
	{
		dest[idx] = *(src + idx);
	}
	dest[idx] = '\0';

	return (dest);
}
