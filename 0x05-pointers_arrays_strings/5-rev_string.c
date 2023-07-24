#include <stdio.h>
/**
 * rev_string - Reverse a string
 * @s: Input String
 * Retur: Return String
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\n')
	{
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
