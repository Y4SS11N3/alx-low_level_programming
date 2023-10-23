#include "main.h"

/**
 * _memset - Fills a memory area with a specified byte
 * @s: Pointer to the memory area to be filled
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to be filled
 * Return: Pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx; /* idx used for iteration */

	for (idx = 0; idx < n; idx++)
	{
		s[idx] = b;
	}
	return (s);
}
