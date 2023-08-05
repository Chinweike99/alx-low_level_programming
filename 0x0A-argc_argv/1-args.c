#include <stdio.h>
/**
 * main - entry Point
 * @argc: Takes the number of Arguments
 * @argv: Takes the string of the Arguments
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
