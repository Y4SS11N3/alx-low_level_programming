#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - Determines if a number is a palindrome
 * @num: Integer to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(int num)
{
	int reversed = 0, original = num;

	while (num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return (original == reversed);
}

/**
 * largest_palindrome_product - Calculates the largest palindrome product
 * from two n-digit numbers
 * @n_digits: Number of digits in each factor
 *
 * Return: Largest palindrome product
 */
int largest_palindrome_product(int n_digits)
{
	int max_num = 1, min_num, largest_palindrome = 0;
	int i, j, product;

	for (i = 0; i < n_digits; i++)
	{
		max_num *= 10;
	}
	min_num = max_num / 10;
	max_num--;

	for (i = max_num; i >= min_num; i--)
	{
		for (j = i; j >= min_num; j--)
		{
			product = i * j;

			if (is_palindrome(product) && product > largest_palindrome)
			{
				largest_palindrome = product;
			}
		}
	}
	return (largest_palindrome);
}

/**
 * main - Entry point for the key generator program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	FILE *file;
	int result;

	result = largest_palindrome_product(3);
	file = fopen("102-result", "w");

	if (file == NULL)
	{
		printf("Error opening file\n");
		return (1);
	}
	fprintf(file, "%d", result);
	fclose(file);
	return (0);
}
