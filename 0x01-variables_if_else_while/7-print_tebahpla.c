#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
*/
int main(void)
{
	char alph; /* alph: character */

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}

