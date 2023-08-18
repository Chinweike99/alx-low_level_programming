#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The first parameter
 * @all: Name of list
 * @k: For loop
 *
 * Return: Return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int k = 0;
	unsigned int sum = 0;

	va_start(all, n);
	if (n == 0)
	{
		va_end(all);
		return (0);
	}
	for (; k < n; k++)
	{
		sum = sum + va_arg(all, int);
	}
	va_end(all);
	return (sum);
}
