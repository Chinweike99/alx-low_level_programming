#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings.
 * @s1: The string to concatenate
 * @s2: Concatenating string
 * Return: S1 on Success
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int str_len = 0;
	int i;
	int j;

	while (s1[str_len] != '\0' && s2[str_len] != '\0')
	{
		str_len++;
	}
	ptr = malloc(str_len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < str_len; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
