#include "main.h"
/**
 * _pow_recursion - a function that returns value
 * @x: The base value
 * @y: The power integer
 * Return: Always Success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
