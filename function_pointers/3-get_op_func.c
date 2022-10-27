#include "3-calc.h"

/**
 * get_op_func - essentially gives you the correct mini-calculator to utilize
 * @s: operator given by user
 * Return: pointer to the correct function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int a = 0;

	while (ops[a].op)
	{
		if (strcmp(ops[a].op, s) == 0)
		{
			return (ops[a].f);
		}
		a++;
	}
	return (NULL);
}
