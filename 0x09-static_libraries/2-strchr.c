#include"main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: The String of charcter
 * @c: The character to be located
 * Return: Always success
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
