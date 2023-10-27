#include "main.h"

/**
 * _strncpy - Clones a string
 * @dest: The target string.
 * @src: The string to be duplicated.
 * @n: Number of bytes to be used from src.
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int itr; /* itr is the iterator for the loops */

	for (itr = 0; itr < n && src[itr] != '\0'; itr++)
		dest[itr] = src[itr];
	for ( ; itr < n; itr++)
		dest[itr] = '\0';

	return (dest);
}
