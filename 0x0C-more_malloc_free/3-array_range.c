#include "main.h"

/**
 * array_range - generates an array of integers
 * @min: smallest integer
 * @max: largest integer
 * Return: integer array
 */
int *array_range(int min, int max)
{
	/* idx: index for iteration, tmp: temporary variable for min */
	int *arr, idx = 0, tmp = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (idx <= max - min)
		arr[idx++] = tmp++;
	return (arr);
}
