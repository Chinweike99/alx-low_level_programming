#include <stdio.h>
/**
 * _numargs - entry Point
 * @argc: Takes the number of Arguments
 * @argv: Takes the string of the Arguments
 * Return: Always 0 success
 */
int _numargs(int argc, char *argv[])
{
	(void)*argv;
	printf("%d", argc);
	return (0);
}
