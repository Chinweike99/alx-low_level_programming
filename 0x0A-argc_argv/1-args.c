#include <stdio.h>
/**
 * main - entry Point
 * @argc: Takes the number of Arguments
 * @argv: Takes the string of the Arguments
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	(void)*argv;
	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
