#include "main.h"

/**
 * swap_int - Function that interchanges the values of two integers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a; /* Temporary variable to hold the value of 'a' */
	*a = *b;
	*b = temp;
}
