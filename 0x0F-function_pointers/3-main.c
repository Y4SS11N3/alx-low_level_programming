#include "3-calc.h"

/**
 * main - performs basic operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* 'num1', 'num2' are the numbers on which operation is performed */
	int num1, num2, result;
	/* 'o' is the operator */
	char o;
	/* 'func' is the function to perform the operation */
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(num1, num2);

	printf("%d\n", result);

	return (0);
}
