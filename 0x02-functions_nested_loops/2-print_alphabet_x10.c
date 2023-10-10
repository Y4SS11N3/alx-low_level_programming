#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 *
 * Return: None
 */
void print_alphabet_x10(void)
{
	int loop_counter = 0; /* variable to count the number of iterations */
	char alphabet_letter; /* variable to hold each letter of the alphabet */

	while (loop_counter < 10)
	{
		alphabet_letter = 'a';
		while (alphabet_letter <= 'z')
		{
			_putchar(alphabet_letter);
			alphabet_letter++;
		}
		_putchar('\n');

		loop_counter++;
	}
}

