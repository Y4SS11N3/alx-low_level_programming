#include "function_pointers.h"

/**
 * int_index - looks for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	/* 'idx' is the index for the array */
	int idx;

	if (array && cmp)
	{
		for (idx = 0; idx < size; idx++)
		{
			if (cmp(array[idx]) != 0)
				return (idx);
		}
	}

	return (-1);
}
