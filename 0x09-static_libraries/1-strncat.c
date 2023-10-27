#include "main.h"

/**
 * _strncat - Merges a certain amount of two strings
 * @dest: The target string.
 * @src: The string to append.
 * @n: Number of bytes to be used from src.
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_idx = 0;
	/*
	* dest_len tracks length of dest
	* src_idx is the iterator for src
	*/

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (src_idx < n)
	{
		*(dest + dest_len) = *(src + src_idx);
		if (*(src + src_idx) == '\0')
			break;
		dest_len++;
		src_idx++;
	}
	return (dest);
}
