#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - The Entry Point of code
 * @argc: First Argument
 * @argv: Second arguement
 * Return: Return 0 on Success
 */
int main()
{
	int num1;
	int num2;
	int calc;
	int operator;

	num1 = 5;
	num2 = 3;
	operator = 0;
	if (operator == '+')
	{
		calc = num1 + num2;
		printf("Sum: %d\n", calc);
	}
	else if (operator == '-')
	{
		calc = num1 - num2;
		printf("Difference: %d\n", calc);
	}
	else if (operator == '*')
	{
		calc = num1 * num2;
		printf("Product: %d\n", calc);
	}
	else if (operator == '/')
	{
		calc = num1 / num2;
		printf("Division: %d\n", calc);
	}
	else if (operator == '%')
	{
		calc = num1 % num2;
		printf("modulus: %d\n", calc);
	}
	else
		printf("Error\n");
	exit(99);
	return (0);
}
