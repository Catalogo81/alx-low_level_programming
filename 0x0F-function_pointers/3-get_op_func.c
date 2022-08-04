#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func -  selects the correct function to perform asked operation
 * @s: operator passed as argument
 *
 * Return: 0 (Success)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
		{
			return (op_s[i].f);
		}
		i++;
	}
	return (NULL);
}
