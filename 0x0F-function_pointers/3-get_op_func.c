#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @op: operator given by user
 *
 * Return: pointer to corresponding function
 */
int (*get_op_func(char *op))(int, int)
{
	/* 'operations' is an array of operator-function pairs */
	op_t operations[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	/* 'idx' is the index for the operations array */
	int idx;

	idx = 0;

	while (operations[idx].op)
	{
		if (strcmp(operations[idx].op, op) == 0)
			return (operations[idx].f);
		idx++;
	}

	return (NULL);
}
