#include "main.h"

/**
 * flip_bits - Counts bits to flip to convert one number to another.
 * @n: Initial number.
 * @m: Target number.
 *
 * Return: Count of bits to flip from n to m. No % or / operators used.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m; /* XOR to identify differing bits */
	unsigned int bits = 0; /* Count of bits to flip */

	/* Count differing bits */
	while (xor)
	{
		bits += xor & 1; /* Increment if least significant bit is 1 */
		xor >>= 1; /* Right shift to check next bit */
	}

	return (bits);
}
