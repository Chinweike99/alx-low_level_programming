#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - The Entry Point of code
 * @argc: First Argument
 * @argv: Second arguement
 * Return: Return 0 on Success
 */
int main(int num1, int num2)
{
/*	int num1;
	int num2;*/
	char operator;
	int calc;

/*	num1 = atoi(argv);
	num2 = atoi(argv);
	operator = argc;*/
	if (operator == '+')
		calc = num1 + num2;
	else if (operator == '-')
		calc = num1 - num2;
	else if (operator == '*')
		calc = num1 * num2;
	else if (operator == '/')
		calc = num1 / num2;
	else if (operator == '%')
		calc = num1 % num2;
	else
		printf("Error\n");
	exit(99);
}
