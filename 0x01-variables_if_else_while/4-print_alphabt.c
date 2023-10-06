#include <stdio.h>

/**
 * main - Program's Launchaing pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
