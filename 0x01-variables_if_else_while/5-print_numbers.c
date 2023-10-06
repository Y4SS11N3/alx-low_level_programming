#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int numr; /* numr: number */

	for (numr = 0; numr < 10; numr++)
		putchar(numr + '0');
	putchar('\n');
	return (0);
}
