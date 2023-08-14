#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * Return: return mul on success
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	if (argc != 3)
	{
		printf("Error\n");
		return 98;
	}
	if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
	{
		printf("Error\n");
		return 98;
	}
	printf("%d\n", result);
	return 0;
}
