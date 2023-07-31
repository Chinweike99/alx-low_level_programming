#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: a pointer that tells the function destination
 * @src: pointer that tells the function source row
 * @n: a number that tells the function how many boxes needed
 * Return: Return dest Success
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
