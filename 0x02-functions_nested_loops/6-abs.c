#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @numr: Integer to compute
 *
 * Return: Absolute value of numr
 */
int _abs(int numr)
{
    int abs_val; /* variable to hold the absolute value */

    if (numr >= 0)
    {
        abs_val = numr;
    }
    else
    {
        abs_val = -numr;
    }

    return (abs_val);
}

