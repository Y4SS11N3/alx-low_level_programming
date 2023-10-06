#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int numr; /* numr: single-digit number */

	for (numr = '0'; numr <= '9'; numr++)
	{
		putchar(numr);
		if (numr != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
