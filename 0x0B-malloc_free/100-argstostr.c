#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Joins all the arguments of a program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to the new string, or NULL if fails or ac or av is NULL.
 */
char *argstostr(int ac, char **av)
{
	char *out_str;
	int c, idx, jdx, kdx;

	if (ac == 0)
		return (NULL);

	for (c = idx = 0; idx < ac; idx++)
	{
		if (av[idx] == NULL)
			return (NULL);

		for (jdx = 0; av[idx][jdx] != '\0'; jdx++)
			c++;
		c++;
	}

	out_str = malloc((c + 1) * sizeof(char));

	if (out_str == NULL)
	{
		free(out_str);
		return (NULL);
	}

	for (idx = jdx = kdx = 0; kdx < c; jdx++, kdx++)
	{
		if (av[idx][jdx] == '\0')
		{
			out_str[kdx] = '\n';
			idx++;
			kdx++;
			jdx = 0;
		}
		if (kdx < c - 1)
			out_str[kdx] = av[idx][jdx];
	}
	out_str[kdx] = '\0';

	return (out_str);
}
