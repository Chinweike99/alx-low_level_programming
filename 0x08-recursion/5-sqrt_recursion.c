#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: The natural number
 * Return: always return success
 */
int _sqrt_recursion(int n)
{
	int square_root = _sqrt_recursion(n);

	if (square_root == -1)
	{
		printf("%d", n);
	}
	else
	{
		printf("%d", square_root);
	}
	return (0);
}
