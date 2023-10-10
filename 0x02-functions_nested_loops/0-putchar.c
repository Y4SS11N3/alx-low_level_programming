#include "main.h"
#include <stdio.h>

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
        putchar(TxT[idx]);
    }
    putchar('\n');
    return (0);
}

