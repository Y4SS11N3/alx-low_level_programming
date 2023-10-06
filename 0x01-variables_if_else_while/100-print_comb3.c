#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int numr1, numr2; /* numr1 and numr2: two different digits */

	for (numr1 = '0'; numr1 <= '9'; numr1++)
	{
		for (numr2 = numr1 + 1; numr2 <= '9'; numr2++)
		{
			putchar(numr1);
			putchar(numr2);
			if (numr1 != '8' || numr2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

