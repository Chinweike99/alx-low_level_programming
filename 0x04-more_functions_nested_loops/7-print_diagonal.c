#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: input variable
 * Return; void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\\');
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 1; j++)
		{
			_putchar(' ');
			_putchar('\\');
		}
	}
	_putchar('\n');
}
