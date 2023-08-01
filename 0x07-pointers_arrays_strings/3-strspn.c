#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a pointer to the string for which we want to find the length
 * @accept: pointer to the string containing characters
 * Return: Return string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; *accept != '\0'; j++)
		{
			_putchar (*accept);
		}
		_putchar (*s);
	}
	return (0);
}
