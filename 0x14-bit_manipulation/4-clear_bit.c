#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0
 * at a given index
 * @n: Pointer to the integers
 * @index: Position of the bit change
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cast;

	cast = 1;
	cast = cast << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = cast ^ *n;
	return (1);
}
