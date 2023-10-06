#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int numr1, numr2; /* numr1 and numr2: two-different numbers */

	for (numr1 = 0; numr1 < 100; numr1++)
	{
		for (numr2 = numr1 + 1; numr2 < 100; numr2++)
		{
			putchar((numr1 / 10) + '0');
			putchar((numr1 % 10) + '0');
			putchar(' ');
			putchar((numr2 / 10) + '0');
			putchar((numr2 % 10) + '0');
			if (numr1 != 98 || numr2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
