#include <stdio.h>
/**
 * main - Outputs name
 * @arg_c: argument count
 * @arg_v: argument values
 * Return: 0 - success
 */
int main(int arg_c __attribute__((unused)), char *arg_v[])
{
	/* arg_v[0] is program name */
	printf("%s\n", arg_v[0]);
	return (0);
}
