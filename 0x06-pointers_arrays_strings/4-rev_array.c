#include "main.h"

/**
 * reverse_array - Inverts the content of an array of integers.
 * @arr: The array to be inverted.
 * @num_elements: Number of elements in the array.
 * Return: Nothing.
 */
void reverse_array(int *arr, int num_elements)
{
	int outer_idx, inner_idx; /* iterators for the loops */
	int temp_val; /* temporary variable for swapping */

	for (outer_idx = 0; outer_idx < num_elements - 1; outer_idx++)
	{
		for (inner_idx = outer_idx + 1; inner_idx > 0; inner_idx--)
		{
			temp_val = *(arr + inner_idx);
			*(arr + inner_idx) = *(arr + (inner_idx - 1));
			*(arr + (inner_idx - 1)) = temp_val;
		}
	}
}
