#include <stdio.h>
#include "main.h"
/**
 * add - Function that performs addition
 * Return: Sum of two numbers
 * @a: First integer
 * @b: second integer
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Function that performs subtraction
 * Return: Difference of two numbers
 * @a: first integer
 * @b: second integer
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Function that performs multiplication
 * Return: Return multiple of numbers
 * @a: first integer
 * @b: second integer
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * divi - Function that peforms multiplication
 * @a: First integer
 * @b: Second integer
 * Return: division output
 */
int divi(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * modu - Function that peforms modulus operation
 * @a: First integer
 * @b: Second integer
 * Return: modulus of division
 */
int modu(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
