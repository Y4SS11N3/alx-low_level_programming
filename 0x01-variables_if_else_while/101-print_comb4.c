#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int numr1, numr2, numr3; /* num1, num2 and num3: three different numbers */

	for (numr1 = '0'; numr1 <= '7'; numr1++)
	{
		for (numr2 = numr1 + 1; numr2 <= '8'; numr2++)
		{
			for (numr3 = numr2 + 1; numr3 <= '9'; numr3++)
			{
				putchar(numr1);
				putchar(numr2);
				putchar(numr3);
				if (numr1 != '7' || numr2 != '8' || numr3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
