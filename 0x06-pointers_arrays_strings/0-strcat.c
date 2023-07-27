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
	char s1[98] = "Hello";
	char s2[] = "World";

	strcat(s1, s2);
	printf("%s", s1);
}
