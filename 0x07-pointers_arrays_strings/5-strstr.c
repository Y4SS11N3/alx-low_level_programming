#include "main.h"

/**
* _strstr - Locates a substring
* @haystack: The string
* @needle: The substring to locate
* Return: Pointer to the located substring, or NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *res = haystack; /* res initially points to haystack */
	char *fndl = needle; /* fndl is the initial pointer to needle */

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (res);
		}
		needle = fndl;
		res++;
		haystack = res;
	}
	return (0);
}
