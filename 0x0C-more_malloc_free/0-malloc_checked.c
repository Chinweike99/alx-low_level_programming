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
	unsigned int i;

	ptr = malloc(sizeof(int));
	for (i = 0; i < b; i++)
	{
		printf("%u", i);
	}
	if (ptr == NULL)
	{
		exit(98);
	}
	return (0);
}
