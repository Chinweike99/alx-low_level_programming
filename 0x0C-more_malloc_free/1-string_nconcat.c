#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * string_nconcat - A function that concatenates two strings
 * @s1: Character to concatenate.
 * @s2: character to be concatenated
 * @n: Integer value
 * Return: Return 0 on Success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int str_len;

	str_len = 0;
	ptr = malloc(sizeof(char));
	while (s1)
	{
		s1++;
	}
	while (s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	s2 = '\0';
	if (s1[str_len] != '\0')
	{
		str_len++;
	}
	if (s1 == NULL)
	{
		printf("%s %s", s1, s2);
	}
	printf("%d", n);
	return (ptr);
}
