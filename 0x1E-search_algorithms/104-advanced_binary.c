#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @start: Starting index
 * @end: Ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}

/**
 * advanced_binary_recursive - Searches for a value
 * in a sorted array of integers
 * using the Advanced Binary search algorithm recursively
 * @array: Pointer to the first element of the array to search
 * @start: Starting index of the subarray
 * @end: Ending index of the subarray
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
	size_t mid;

	if (start > end)
		return (-1);

	print_array(array, start, end);

	mid = start + (end - start) / 2;

	if (array[mid] == value && (mid == start || array[mid - 1] < value))
		return (mid);

	if (array[mid] >= value)
		return (advanced_binary_recursive(array, start, mid, value));

	return (advanced_binary_recursive(array, mid + 1, end, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 * using the Advanced Binary search algorithm
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
