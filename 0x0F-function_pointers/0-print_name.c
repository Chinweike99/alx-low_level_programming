#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints a name
 * @name: point to name needed
 * @f: Takes name parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	printf("\n");
}
