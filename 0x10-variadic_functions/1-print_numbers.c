#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: return numbrs on success.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbrs;
	unsigned int x;

	va_start(numbrs, n);
	for (x = 0; x < n; x++)
	{
		printf("%d ", va_arg(numbrs, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbrs);
	printf("\n");
}
