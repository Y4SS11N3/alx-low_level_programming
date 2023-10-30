#include "main.h"
#include <stdlib.h>

/**
 * free_2D - Releases a 2D grid.
 * @arr: Grid to be freed.
 * @h: Vertical size of grid.
 *
 * Return: Nothing.
 */
void free_2D(char **arr, unsigned int h)
{
	if (arr != NULL && h != 0)
	{
		for (; h > 0; h--)
			free(arr[h]);
		free(arr[h]);
		free(arr);
	}
}

/**
 * strtow - Divides a string into words.
 * @s: Input string.
 *
 * Return: Pointer to word array or NULL if error.
 */
char **strtow(char *s)
{
	char **out_arr;
	unsigned int count, h, i, j, a1;
	unsigned int size;

	if (s == NULL || *s == '\0')
		return (NULL);
	for (count = h = 0; s[count] != '\0'; count++)
		if (s[count] != ' ' && (s[count + 1] == ' ' || s[count + 1] == '\0'))
			h++;
	size = (h + 1) * sizeof(char *);
	out_arr = malloc(size);
	if (out_arr == NULL || h == 0)
	{
		free(out_arr);
		return (NULL);
	}
	for (i = a1 = 0; i < h; i++)
	{
		for (count = a1; s[count] != '\0'; count++)
		{
			if (s[count] == ' ')
				a1++;
			if (s[count] != ' ' && (s[count + 1] == ' ' || s[count + 1] == '\0'))
			{
				size = (count - a1 + 2) * sizeof(char);
				out_arr[i] = malloc(size);
				if (out_arr[i] == NULL)
				{
					free_2D(out_arr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= count; a1++, j++)
			out_arr[i][j] = s[a1];
		out_arr[i][j] = '\0';
	}
	out_arr[i] = NULL;
	return (out_arr);
}
