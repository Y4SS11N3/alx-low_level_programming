#include "main.h"

/**
 * set_bit - Sets a bit's value to 1 at a specified index.
 * @n: Pointer to the bit representation.
 * @index: Index of the bit, starting from 0.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8) /* Check for index out of bounds */
		return (-1);

	*n |= (1 << index); /* Set the bit at the given index to 1 */

	return (1);
}
