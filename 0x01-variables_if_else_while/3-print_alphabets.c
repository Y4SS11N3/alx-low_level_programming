#include <stdio.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (ch = 'A'; alph <= 'Z'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
