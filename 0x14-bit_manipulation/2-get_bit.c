#include "main.h"

/**
 * get_bit - Retrieves a bit's value at a specified index.
 * @n: Bit representation.
 * @index: Index of bit, starting from 0.
 *
 * Return: Value of the bit at the given index, or -1 if error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8) /* Check for index out of bounds */
		return (-1);

	return ((n >> index) & 1); /* Shift n right by index and return bit value */
}

