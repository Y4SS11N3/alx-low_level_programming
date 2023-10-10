#include "main.h"
#include <unistd.h>

/**
 * main - Program's Launching pad
 *
 * Return: 0 if the program executes successfully, otherwise no
 */
int main(void)
{
	char TxT[] = "_putchar"; /* text to print */

	int idx; /* index for iteration */

	for (idx = 0; TxT[idx] != '\0'; idx++)
	{
		_putchar(TxT[idx]);
	}
	_putchar('\n');
	return (0);
}

