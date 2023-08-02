#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: The value to be returned
 * Return: Always Success
 */
int factorial(int n)
{
	int s;
	if (n < 0)
	{
		return (n);
	}
	s = n * factorial(n - 1);
		return (s + n);
}
