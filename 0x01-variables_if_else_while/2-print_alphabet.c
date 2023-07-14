#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of code 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	for (; ch <= 'z'; ch++) 
	{
		printf("%c\n", ch);
	}
	putchar('\n');
	return 0;
}
