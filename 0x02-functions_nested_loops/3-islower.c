#include "main.h"
/**
 * _islower - Checks for Lowercase alphabet
 * @c: Character to be checked
 * Return: If character is lowercase otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
