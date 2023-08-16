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
	int b;

	b = 0;
	for (i = 0; i < size; i++)
	{
		if (b < 48 && b > 57)
		{
			return (b);
		}
		return (-1);
	}
	if (cmp(array[i]) == 0 && size <= 0)
		return (-1);
	return (0);

}
