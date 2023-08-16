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
	(*get_op_func)(*s);
	if (s != '+' || s != '-' || s != '/' || s != '*' || s != '%')
	{
		return (NULL);
	}
	return (0);
}
