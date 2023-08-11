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

	new_size = 2 * old_size;
	ptr = malloc(old_size * sizeof(int));
	newptr = realloc(ptr, new_size * sizeof(int));
	if (newptr != NULL)
	{
		ptr = newptr;
	}
	else
	{
		newptr = NULL;
	}
	free(ptr);
	for (i = 0; i < old_size; i++)
	{
		newptr[i] = i;
		new_size = old_size * 2;
	}
	if (new_size > old_size)
	{
		newptr = NULL;
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(newptr);
	return (newptr);
}
