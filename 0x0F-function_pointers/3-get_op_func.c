#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - performs operation on two integers
 *
 * @s: opcode of the operation to perform
 *
 * Description: performs operation on two integers according to
 * a specified opcode
 *
 * Return: the result of the operation specified by the opcode
 * on the two integers
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
