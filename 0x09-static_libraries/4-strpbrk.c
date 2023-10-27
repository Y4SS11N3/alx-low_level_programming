#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: The string
 * @accept: The bytes to search for
 * Return: Pointer to the matching byte in s, or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int idx; /* idx used for iteration */

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
