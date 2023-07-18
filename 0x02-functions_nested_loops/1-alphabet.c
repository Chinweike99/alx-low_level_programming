#include <stdio.h>
/**
 * Main - Check the codes
 *
 * Return: Always 0
 */
void print_alphabet();
int main()
{
	print_alphabet();
	return (0);

}
void print_alphabet()
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
