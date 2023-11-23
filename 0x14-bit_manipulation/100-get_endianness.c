#include "main.h"

/**
 * get_endianness - Determines system endianness.
 *
 * Return: 0 for big-endian, 1 for little-endian.
 */
int get_endianness(void)
{
	unsigned long int num = 1; /* Declare num and initialize to 1 */

	return (*(char *)&num); /* Interpret the first byte of num */
}
