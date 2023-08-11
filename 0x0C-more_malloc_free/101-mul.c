#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _mul -Function that multipies two integers
 * @num1: Multiplying integer
 * @num2: integer to be multiplied
 * Return: return mul on success
 */
int main(void)
{
	int mul;
	int num1;
	int num2;

	num1 = 0;
	num2 = 0;
	mul = num1 * num2;
	/*int *ptr;*/

	/*ptr = malloc(sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}*/
	mul = num1 * num2;
	if (num1 == 0 && num2 == 0)
	{
		_putchar(0);
	}
	if ((num1 < 48 || num1 > 57) && (num2 < 48 || num2 > 57))
	{
		return (0);
	}
	/**ptr = mul;*/
	return (mul);
}
