#include "main.h"

/**
 * _strcmp - Evaluates two strings
 * @s1: The first string.
 * @s2: The second string.
 * Return: 0 if s1 and s2 are equal, a different number if not.
 */
int _strcmp(char *s1, char *s2)
{
	int idx = 0, result = 0;/* idx is the iterator for the strings
				 * result stores the comparison result

				 */


	while (result == 0)
	{
		if ((*(s1 + idx) == '\0') && (*(s2 + idx) == '\0'))
			break;
		result = *(s1 + idx) - *(s2 + idx);
		idx++;
	}

	return (result);
}
