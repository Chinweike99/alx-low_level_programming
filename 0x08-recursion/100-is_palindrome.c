#include "main.h"
#include <string.h>
/**
 * is_palindrome - a function that returns 1 if a string is a palindrome
 * @s: The character
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	int i;
	int l = strlen(s);

	for (i = 0; i < l; i++)
	{
		if (l == s[i])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (*s);
}
