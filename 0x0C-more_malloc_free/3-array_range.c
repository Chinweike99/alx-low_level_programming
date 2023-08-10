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
	int j;
	int size;

	size = max - min + 1;
	i = 0;
	j = 0;
	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < max)
	{
		while (j < min)
		{
			j++;
		}
		i++;
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}
	if (min > max)
	{
		return (NULL);
	}
	return (ptr);
}
