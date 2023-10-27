#include "main.h"

/**
 * _memcpy - Copies a specified number of bytes from one memory area to another
 * @dest: Pointer to the destination memory area
 * @src: Pointer to the source memory area
 * @n: The number of bytes to be copied
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx; /* Index used for iteration */

	for (idx = 0; idx < n; idx++)
	{
		dest[idx] = src[idx];
	}
	return (dest);
}
