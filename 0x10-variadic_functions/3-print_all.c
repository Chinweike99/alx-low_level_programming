#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *ptr, *sep = "";

	va_list anything;

	va_start(anything, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s %c", sep, va_arg(anything, int));
					break;
				case 'i':
					printf("%s %d", sep, va_arg(anything, int));
					break;
				case 'f':
					printf("%s %f", sep, va_arg(anything, double));
					break;
				case 's':
					ptr = va_arg(anything, char*);
					if (!ptr)
						ptr = "(nil)";
					printf("%s %s", sep, ptr);
					break;
				default:
					x++;
					continue;
			}
		}
	}
	printf("\n");
	va_end(anything);
}
