#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints specified elements of an integer array
 * @a: input array
 * @n: number of elements to print
 * Return: none
 */

void print_array(int *a, int n)
{
	int idx = 0; /* Index for array traversal */

	for (; idx < n; idx++)
	{
		printf("%d", *(a + idx));
		if (idx != (n - 1))
			printf(", ");
	}
	printf("\n");
}
