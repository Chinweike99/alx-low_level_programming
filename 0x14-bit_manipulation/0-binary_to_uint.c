#include "main.h"
/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x = 0;
	int length = strlen(b);

	for (x = length - 1; x >= 0; x--)
	{
		if (b[x] == '1')
			result |= (1u << (length - 1 - x));
		else if (b[x] != '0')
			return (0);

	}
	return (result);
}
