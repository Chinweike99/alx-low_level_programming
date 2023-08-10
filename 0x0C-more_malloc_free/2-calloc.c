#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: Array to allocate memory
 * @size: Size of the array
 * Return: Return ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	ptr = (int *) malloc(nmemb * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	return (ptr);
}
