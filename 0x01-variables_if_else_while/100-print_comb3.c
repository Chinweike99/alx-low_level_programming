#include <stdio.h>
/**
 * main - Entry Point of code
 *
 * Return: Always 0 Succes
 */
int main(void)
{
	int n;

	for(n = 0; n <= 99; n++)
	{
		if(n < 10)
		{
			putchar('0');
			putchar('0' + n);
		}
		else
		{
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
		}
	}
	putchar('\n');
	return (0);
}
