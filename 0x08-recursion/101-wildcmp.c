#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support
 * @s1: Pointer to first string
 * @s2: Pointer to second string, can contain wildcard '*'
 * Return: 1 if strings are considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	/* Base case when both strings kissaliw b */
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	/* Handling wildcard '*' in s2 */
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	/* When characters in s1 and s2 kitchabho */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/* When characters in s1 and s2 makitchabhoch */
	return (0);
}
