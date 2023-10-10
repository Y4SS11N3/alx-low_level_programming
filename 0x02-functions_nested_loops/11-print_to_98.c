#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from numr to 98
 * @numr: Starting integer
 *
 * Return: None
 */
void print_to_98(int numr)
{
	if (numr < 98)
	{
		while (numr < 98)
		{
			printf("%d, ", numr);
			numr++;
		}
	}
	else if (numr > 98)
	{
		while (numr > 98)
		{
			printf("%d, ", numr);
			numr--;
		}
	}
	printf("98\n");
}

