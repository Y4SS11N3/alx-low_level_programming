#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_num - verifies if a string contains a non-digit char
 * @str: string to be checked
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_num(char *str)
{
	int idx = 0; /* idx: index for iteration */

	while (str[idx])
	{
		if (str[idx] < '0' || str[idx] > '9')
			return (0);
		idx++;
	}
	return (1);
}

/**
 * _strLength - calculates the length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strLength(char *str)
{
	int idx = 0; /* idx: index for iteration */

	while (str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}

/**
 * errHandle - manages errors for main
 */
void errHandle(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - performs multiplication of two positive numbers
 * @argCount: count of arguments
 * @argVect: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argCount, char *argVect[])
{
	char *num1, *num2;
	int len1, len2, len, i, carryOver, digit1, digit2, *resultArr, flag = 0;

	num1 = argVect[1], num2 = argVect[2];
	if (argCount != 3 || !is_num(num1) || !is_num(num2))
		errHandle();
	len1 = _strLength(num1);
	len2 = _strLength(num2);
	len = len1 + len2 + 1;
	resultArr = malloc(sizeof(int) * len);
	if (!resultArr)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		resultArr[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = num1[len1] - '0';
		carryOver = 0;
		for (len2 = _strLength(num2) - 1; len2 >= 0; len2--)
		{
			digit2 = num2[len2] - '0';
			carryOver += resultArr[len1 + len2 + 1] + (digit1 * digit2);
			resultArr[len1 + len2 + 1] = carryOver % 10;
			carryOver /= 10;
		}
		if (carryOver > 0)
			resultArr[len1 + len2 + 1] += carryOver;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (resultArr[i])
			flag = 1;
		if (flag)
			_putchar(resultArr[i] + '0');
	}
	if (!flag)
		_putchar('0');
	_putchar('\n');
	free(resultArr);
	return (0);
}
