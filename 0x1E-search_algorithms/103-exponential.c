#include "search_algos.h"

/**
 * binary_search_recursive - Performs binary search recursively on a subarray
 * @array: Pointer to the first element of the subarray to search
 * @left: Starting index of the subarray
 * @right: Ending index of the subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right >= left)
	{
		printf("Searching in array: ");
		for (mid = left; mid <= right; mid++)
		{
			printf("%d", array[mid]);
			if (mid != right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			return (binary_search_recursive(array, left, mid - 1, value));

		return (binary_search_recursive(array, mid + 1, right, value));
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located,
 * or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		bound / 2, bound < size ? bound : size - 1);

	return (binary_search_recursive(array, bound / 2,
		bound < size ? bound : size - 1, value));
}
