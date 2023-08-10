#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * array_range - a function that creates an array of integers
 * @min: Minimum Value
 * @max: Maximum Value
 * Return: Return pointer on Success
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size;
	
	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == (NULL))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
