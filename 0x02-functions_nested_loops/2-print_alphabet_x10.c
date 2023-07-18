#include <stdio.h>

/**
 * print_alphabet_x10 - Print Lowercase alphabet
 *
 */
void print_alphabet_x10(void)
{
	char num, alpha;

	for (num = 0; num <= 9; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		putchar('\n');
	}
}

