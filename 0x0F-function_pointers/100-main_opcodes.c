#include <stdio.h>
#include <stdlib.h>

/**
 * main - exhibits its own opcodes
 * @argc: count of arguments
 * @argv: vector of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	/* 'num_bytes' is the number of bytes to print */
	int num_bytes, idx;
	/* 'opcode_arr' is the array of opcodes */
	char *opcode_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcode_arr = (char *)main;

	for (idx = 0; idx < num_bytes; idx++)
	{
		if (idx == num_bytes - 1)
		{
			printf("%02hhx\n", opcode_arr[idx]);
			break;
		}
		printf("%02hhx ", opcode_arr[idx]);
	}
	return (0);
}
