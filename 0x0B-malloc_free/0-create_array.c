#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: The size of the Array
 * @c: The Charcacters of the Array
 * Return: Return pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int n;

	ptr =(char *) malloc(size * sizeof(char));
	for (n = 0; n < size; n++)
	{
		ptr[n] = c;
	}
	return(ptr);
}
