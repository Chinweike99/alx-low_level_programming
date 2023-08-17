#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array - Function to ececute on each element
 * @num: executing arg
 * Return: return 0 on Suceess
 */
int array(int num)
{
	printf("%d\n", num);
	return (num);
}

/**
 * array_iterator - function that executes a func
 * @size: The Size of the array
 * @array: pointer to func that executes each element
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
