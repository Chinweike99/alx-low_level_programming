#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * *get_op_func - funtion to select correct function
 * for operation
 * @s: the operator passed as argument to the program
 * Return: Return 0
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
/*	(*get_op_func)(*s);
	if (s != '+' || s != '-' || s != '/' || s != '*' || s != '%')
	{
		return (NULL);
	}*/
	return (0);
}
