#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Outputs the contents of a buffer in a specific format.
 * This function takes a buffer and its size as input, and prints the buffer
 * content in a specific format. If the size is less than or equal to 0, it
 * prints a new line.
 *
 * @b: The buffer to display.
 * @size: The size of the buffer.
 */
void print_buffer(char *b, int size)
{
	int line_idx, hex_idx, char_idx;
	/*
	 * line_idx: index for outer loop
	 * hex_idx: index for inner loop to print hexadecimal representation of bytes
	 * char_idx: index for inner loop to print character representation of bytes
	 */

	if (size <= 0)
		printf("\n");
	else
	{
		for (line_idx = 0; line_idx < size; line_idx += 10)
		{
			printf("%.8x:", line_idx);
			for (hex_idx = line_idx; hex_idx < line_idx + 10; hex_idx++)
			{
				if (hex_idx % 2 == 0)
					printf(" ");
				if (hex_idx < size)
					printf("%.2x", *(b + hex_idx));
				else
					printf("  ");
			}
			printf(" ");
			for (char_idx = line_idx; char_idx < line_idx + 10; char_idx++)
			{
				if (char_idx >= size)
					break;
				if (*(b + char_idx) < 32 || *(b + char_idx) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + char_idx));
			}
			printf("\n");
		}
	}
}
