#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @arg_c: Argument count
 * @arg_v: Argument values
 * Return: 0 - success
 */
int main(int arg_c, char *arg_v[])
{
	/* Check if the number of arguments is not equal to 3 */
	if (arg_c != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* Multiply the two numbers and print the result */
	printf("%d\n", atoi(arg_v[1]) * atoi(arg_v[2]));
	return (0);
}
