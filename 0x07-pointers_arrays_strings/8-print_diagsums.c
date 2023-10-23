#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum of diagonals of a square matrix
 * @a: Pointer to the matrix
 * @size: The size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int idx; /* idx is used for iteration */
	int dig1_sum = 0, dig2_sum = 0; /* dig1_sum and dig2_sum
					 * hold the sums of the diagonals
					 */

	for (idx = 0; idx < size; idx++)
	{
		dig1_sum += *(a + (size * idx + idx));
		dig2_sum += *(a + (size * idx + size - 1 - idx));
	}
	printf("%d, ", dig1_sum);
	printf("%d\n", dig2_sum);
}
