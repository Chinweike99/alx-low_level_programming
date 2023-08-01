#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring.
 * @needle: The substring to search for.
 * @haystack: The major string
 * Return: Return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; *needle != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (needle);
			}
		}
	}
	return (NULL);
}
