#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int idx = 0, inner_idx;
	int word_separators[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(str + idx) >= 97 && *(str + idx) <= 122)
		*(str + idx) = *(str + idx) - 32;
	idx++;
	while (*(str + idx) != '\0')
	{
		for (inner_idx = 0; inner_idx < 13; inner_idx++)
		{
			if (*(str + idx) == word_separators[inner_idx])
			{
				if ((*(str + (idx + 1)) >= 97) && (*(str + (idx + 1)) <= 122))
					*(str + (idx + 1)) = *(str + (idx + 1)) - 32;
				break;
			}
		}
		idx++;
	}
	return (str);
}
