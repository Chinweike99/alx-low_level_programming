#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Return: return mul on success
 */
int main(void)
{
	int num1;
	int num2;
	int mul;

	mul = num1 * num2;
	if (num1 == NULL && num2 == NULL)
	{
		_putchar(NULL);
	}
	if ((num1 < 48 || num1 > 57) && (num2 < 48 || num2 > 57))
	{
		return (0);
	}
	return (mul);
}
