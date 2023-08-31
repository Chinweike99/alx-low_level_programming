#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: COmparing Number
 * @m: Second comparing number
 * Return: Return number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int my_result;
	unsigned long int y;

	my_result = n ^ m;
	for (y = 0; my_result > 0;)
	{
		if ((my_result & 1) == 0)
			y++;
		my_result = my_result >> 1;
	}
	return (y);
}
