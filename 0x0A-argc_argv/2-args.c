#include <stdio.h>
/**
 * main - Outputs all received arguments
 * @arg_c: argument count
 * @arg_v: argument values
 * Return: 0 - success
 */
int main(int arg_c, char *arg_v[])
{
	/* idx is the loop counter */
	int idx;

	for (idx = 0; idx < arg_c; idx++)
		printf("%s\n", arg_v[idx]);
	return (0);
}
