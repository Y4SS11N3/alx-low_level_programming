#include "main.h"

/**
 * _strlen - computes the number of characters in a string
 * @s: the string to measure
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int str_length = 0; /* a variable to store the count of characters */

	while (s[str_length] != '\0')
	{
		str_length++;
	}
	return (str_length);
}
