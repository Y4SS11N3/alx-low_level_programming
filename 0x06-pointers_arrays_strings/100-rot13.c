#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: Input string.
 *
 * Description: This function takes a string and encodes it using rot13.
 * The encoded string is then returned.
 *
 * Return: The pointer to str.
 */
char *rot13(char *str)
{
	int idx = 0, j;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + idx) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + idx) == alph[j])
			{
				*(str + idx) = rot13[j];
				break;
			}
		}
		idx++;
	}

	return (str);
}
