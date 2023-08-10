#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: The integer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *) malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
