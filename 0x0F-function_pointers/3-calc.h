#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - Structure for operator-function pairs
 *
 * @op: The arithmetic operator
 * @operation: The function that performs the operation
 */
typedef struct op
{
	char *op;
	int (*operation)(int num1, int num2);
} op_t;


int op_add(int num1, int num2);
int op_sub(int num1, int num2);
int op_mul(int num1, int num2);
int op_div(int num1, int num2);
int op_mod(int num1, int num2);
int (*get_op_func(char *op))(int, int);

#endif
