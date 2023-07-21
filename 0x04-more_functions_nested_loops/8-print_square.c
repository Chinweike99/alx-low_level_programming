#include "main.h"
/**
 * print_square - function that prints a square
 * @size: Size of the square
 *
 * Return: Void
 */
void print_square(int size)
{
	int i, j;

	for (size = 0; size < 10; size++)
	{
		_putchar(0);
	}
	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j < (size); j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
