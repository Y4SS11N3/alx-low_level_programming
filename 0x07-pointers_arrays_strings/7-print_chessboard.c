#include "main.h"

/**
 * print_chessboard - Displays a chessboard
 * @a: The chessboard matrix
*/
void print_chessboard(char (*a)[8])
{
	int row, col; /* row and col are used for iteration */

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(*(*(row + a) + col));
		}
	_putchar('\n');
	}
}
