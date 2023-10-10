#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @numr: Integer to compute
 *
 * Return: Absolute value of numr
 */
int _abs(int numr)
{
	int Abs_Val;

	if (numr >= 0)
	{
		Abs_Val = numr;
	}
	else
	{
		Abs_Val = -numr;
	}

	return (Abs_Val);
}
