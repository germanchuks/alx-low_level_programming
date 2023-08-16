#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Gets pointer to function for operator in argument.
 * @s: String operator.
 *
 * Return: Pointer to function. NULL if otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
