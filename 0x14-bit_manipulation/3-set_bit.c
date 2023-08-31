#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: Pointer to bit to be manipulated
 * @index: Position of bit to be manipulated
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cast;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	cast = 1;
	cast = cast << index;
	*n = ((*n) | cast);
	return (1);
}
