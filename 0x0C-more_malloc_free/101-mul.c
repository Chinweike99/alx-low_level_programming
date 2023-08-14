#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * _mul - Function that multipies two integers
 * Return: return mul on success
 */

int _mul(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return 0;
		}
		str++;
	}
	return (1);
}
