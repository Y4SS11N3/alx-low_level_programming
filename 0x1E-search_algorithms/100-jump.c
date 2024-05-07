#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located,
 * or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	i = 0;
	jump = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			   (unsigned long)jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   (unsigned long)i, (unsigned long)jump);

	if (jump > size - 1)
		jump = size - 1;

	while (i < jump && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
			   (unsigned long)i, array[i]);
		i++;
	}
	printf("Value checked array[%lu] = [%d]\n",
		   (unsigned long)i, array[i]);

	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
