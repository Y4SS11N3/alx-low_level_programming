#include "main.h"

/**
 * print_binary - Prints a number's binary representation.
 * @n: Number to print in binary.
 *
 * Return: void.Uses recursive shifting and bitwise AND.No arrays, malloc, %, /
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* Recursive call with right-shifted number */

	_putchar((n & 1) + '0'); /* Convert bit to character and print */
}
