#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 * @src: The source string to be appended
 * @dest: The destination for append
 * @\0: Terminating Null bite
 * Return: Always 0 success
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int i;

	for (i = 0; i <= len1; i++)
		dest[len1 + i] = src[i];
	printf("%s", dest);
}
