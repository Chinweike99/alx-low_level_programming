#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int x;

	va_start(string, n);
	for (x = 0; x < n; x++)
	{
		str = va_arg(string, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
