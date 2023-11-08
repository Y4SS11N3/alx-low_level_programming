#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - applies a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* 'idx' is the index for the array */
	unsigned int idx;

	if (!array || !action)
		return;

	for (idx = 0; idx < size; idx++)
		action(array[idx]);
}
