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
	size_t step, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		if (prev + step >= size)
		{
			prev = size - 1;
			break;
		}

		prev += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev - step, prev);

	while (prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);

		prev++;
	}

	return (-1);
}
