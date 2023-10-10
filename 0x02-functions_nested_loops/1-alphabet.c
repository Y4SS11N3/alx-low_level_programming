#include "main.h"

/**
 * print_alphabet - Prints lowercase alphabet
 *
 * Return: None
 */
void print_alphabet(void)
{
	char lower_case; /* holds each lowercase letter */

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		_putchar(lower_case);
	}
	_putchar('\n');
}

