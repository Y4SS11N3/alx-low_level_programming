#include "main.h"

/**
 * puts_half - Function that prints the latter half of a string
 * @str: input string
 * Return: none
 */

void puts_half(char *str)
{
	int cnt = 0, idx;

	while (cnt >= 0)
	{
		if (str[cnt] == '\0')
			break;
		cnt++;
	}

	if (cnt % 2 == 1)
		idx = cnt / 2;
	else
		idx = (cnt - 1) / 2;

	for (idx++; idx < cnt; idx++)
		_putchar(str[idx]);
	_putchar('\n');
}
