#include "main.h"

/**
 * clear_bit - Sets a bit's value to 0 at a specified index.
 * @n: Pointer to the bit representation.
 * @index: Index of the bit, starting from 0.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8) /* Check for index out of bounds */
		return (-1);

	*n &= ~(1 << index); /* Clear the bit at the given index */

	return (1);
}
