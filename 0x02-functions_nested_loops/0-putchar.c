#include <stdio.h>
#include <string.h>
/**
 * main - check the codes
 *
 * Return: Always 0
 */
int main()
{
	char str[100] = "_putchar";

	for (int i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
