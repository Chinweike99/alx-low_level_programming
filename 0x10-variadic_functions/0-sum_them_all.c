#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The first parameter
 * Return: Return Success
 * @all: Name of list
 * @k: For loop
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int k;
	unsigned int sum;

	sum = 0;
	va_start(all, n);
	if (n == 0)
	{
		return (0);
	}
	for (k = 0; k < n; k++)
	{
		sum = sum + va_arg(all, int);
	}
	return (sum);
}
