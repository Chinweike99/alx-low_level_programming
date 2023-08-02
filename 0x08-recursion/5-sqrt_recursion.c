#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: The natural number
 * Return: always return success
 */
int _sqrt_recursion(int n)
{
	if (n == -1)
	{
		return (-1);
	}
	_sqrt_recursion(n + 1);
	return (0);
}
