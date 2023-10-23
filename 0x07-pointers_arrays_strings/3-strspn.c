#include "main.h"

/**
* _strspn - Determines the length of a prefix substring
* @s: The string to be scanned
* @accept: The string containing the characters to match
* Return: lnt occurence.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cnt = 0; /* cnt used for counting matched characters */
	char *init_acc = accept; /* init_acc holds the initial pointer to accept */

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				cnt++;
				break;
			}
		if (!(*--accept))
			break;
		accept = init_acc;
	}
	return (cnt);
}
