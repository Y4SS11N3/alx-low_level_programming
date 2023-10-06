#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int numr; /* numr: base 16 number */

	for (numr = '0'; numr <= 'f'; numr++)
	{
		if ((numr <= '9') || (numr >= 'a'))
	{
		putchar(numr);
	}
	}
	putchar('\n');
	return (0);
}
