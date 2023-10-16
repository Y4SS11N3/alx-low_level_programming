#include "main.h"

/**
 * rev_string - Function that inverts a given string
 * @s: input string
 * Return: none
 */
void rev_string(char *s)
{
	int idx = 0; /* Index for string traversal */
	char start_idx, end_idx; /* Variables to hold the start and end characters */
	int max_idx, mid_idx; /* Maximum index and middle index of the string */

	while (s[idx] != '\0')
	{
		idx++;
	}

	max_idx = idx - 1;
	mid_idx = max_idx / 2;

	while (mid_idx >= 0)
	{
		start_idx = s[max_idx - mid_idx];
		end_idx = s[mid_idx];
		s[mid_idx] = start_idx;
		s[max_idx - mid_idx] = end_idx;
		mid_idx--;
	}
}
