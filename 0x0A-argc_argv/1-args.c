#include <stdio.h>
/**
 * main - Outputs arg count
 * @arg_c: arg count
 * @arg_v: arg values
 * Return: 0 - success
 */
int main(int arg_c, char *arg_v[] __attribute__((unused)))
{
	/* arg_c - 1 is the number of arguments passed */
	printf("%d\n", arg_c - 1);
	return (0);
}
