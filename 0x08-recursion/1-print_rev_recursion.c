#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: The character to reverse
 */
void _print_rev_recursion(char *s)
{
	int i;
	char ch;
	int l;

	l = strlen(s);
	for (i = 0; i <= l / 2; i++)
	{
		ch = s[i];
		*s = s[l - 1 - i];
		s[l - 2 - i] = ch;
	}
	printf("%s", s);
}
