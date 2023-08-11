#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * @ptr: pointer to the memory previously allocated with a call
 * Return: Return ptr on Success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *newptr;
	unsigned int i;
	unsigned int copy_size;

	new_size = 2 * old_size;
	ptr = malloc(old_size * sizeof(int));
	newptr = (int *)realloc(ptr, new_size * sizeof(int));
	copy_size = old_size < new_size ? old_size : new_size;
	if (newptr != NULL)
	{
		ptr = newptr;
	}
	else
	{
		newptr = NULL;
	}
	for (i = 0; i < copy_size; i++)
	{
		newptr[i] = i;
	}
	if (new_size > old_size)
	{
		newptr = 0;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL)
	{
		free(ptr);
	}
	return (newptr);
}
