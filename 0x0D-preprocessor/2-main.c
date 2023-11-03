#include <stdio.h>

/**
 * main - Exhibits the name of the file from which the program was compiled
 * Return: always 0 (Success)
 */

int main(void)
{
	/* __FILE__: predefined macro in C that holds the current file name */
	printf("%s\n", __FILE__);
	return (0);
} /* YN */

