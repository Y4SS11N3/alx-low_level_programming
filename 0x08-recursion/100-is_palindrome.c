#include "main.h"

/**
 * _str_len_rec - Calculates the length of a string
 * @str: The string to measure.
 * Return: The length of the string.
 */

int _str_len_rec(char *str)
{
	if (!*str)
	{
		return (0);
	}
	return (1 + _str_len_rec(++str));
}

/**
 * check_palindrome - Checks if a string is a palindrome
 * @str: The string to check.
 * @len: The length of the string.
 * Return: 1 if palindrome, otherwise 0.
 */

int check_palindrome(char *str, int len)
{
	if (len < 1)
	{
		return (1);
	}

	if (*str == *(str + len))
	{
		return (check_palindrome(str + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check.
 * Return: 1 if palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int len = _str_len_rec(s);

	return (check_palindrome(s, len - 1));
}

