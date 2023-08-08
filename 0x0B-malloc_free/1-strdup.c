#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  function that returns pointer to newly allocated space in memory
 * @str: String to be returned
 * Return: Return pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int str_len = 0;
	int i;

	while (str[str_len] != '\0')
	{
		str_len++;
	}
	ptr = (char *) malloc(str_len * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
