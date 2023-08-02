#include "main.h"
/**
 * _strlen_recursion -  a function that returns the length of a string
 * @s: String to be printed
 * Return: Always return Success
 */
int _strlen_recursion(char *s)
{
	int count;
	int i;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	_putchar(*s);
	_strlen_recursion(s + 1);
}
