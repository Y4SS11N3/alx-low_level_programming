#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @arg_c: Argument count
 * @arg_v: Argument values
 * Return: 0 - success
 */
int main(int arg_c, char *arg_v[])
{
	/* idx1 and idx2 are loop counters, sum is the total sum of numbers */
	int idx1, idx2, sum = 0;

	for (idx1 = 1; idx1 < arg_c; idx1++)
	{
		for (idx2 = 0; arg_v[idx1][idx2] != '\0'; idx2++)
		{
			if (!isdigit(arg_v[idx1][idx2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg_v[idx1]);
	}
	printf("%d\n", sum);
	return (0);
}

