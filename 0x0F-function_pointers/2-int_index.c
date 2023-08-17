#include <stdio.h>
#include "function_pointers.h"
/**
 * content - Fubction to be searched
 * @a: Array
 * Return: return a on Success
 */
int content(int a)
{
	return (a);
}
/**
 * int_index - returns the index of the first element for which
 * the cmp function does not return 0
 * @array: pointer to find integers
 * @size: size if array
 * @cmp: pointer to the function to be used to compare values
 * Return: return -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
