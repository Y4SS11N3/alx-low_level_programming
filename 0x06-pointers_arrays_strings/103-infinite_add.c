#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers and stores the result in a buffer.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Description: This function takes two numbers and their sizes as input,
 * and adds the numbers. The result is stored in a buffer. If the size is
 * less than or equal to 0, it returns a null pointer.
 *
 * Return: A pointer to the result if successful. Otherwise, it returns 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = 0, len_n2 = 0, sum, max_len, rmd = 0, dig_n1, dig_n2;

	while (*(n1 + len_n1) != '\0')
		len_n1++;
	while (*(n2 + len_n2) != '\0')
		len_n2++;

	max_len = (len_n1 >= len_n2) ? len_n1 : len_n2;
	if (size_r <= max_len + 1)
		return (0);

	r[max_len + 1] = '\0';
	len_n1--, len_n2--, size_r--;
	dig_n1 = *(n1 + len_n1) - '0', dig_n2 = *(n2 + len_n2) - '0';

	while (max_len >= 0)
	{
		sum = dig_n1 + dig_n2 + rmd;
		rmd = (sum >= 10) ? sum / 10 : 0;
		*(r + max_len) = (sum % 10) + '0';
		len_n1--, dig_n1 = (len_n1 >= 0) ? *(n1 + len_n1) - '0' : 0;
		len_n2--, dig_n2 = (len_n2 >= 0) ? *(n2 + len_n2) - '0' : 0;
		max_len--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
