#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - The entry point
 * @argc: first arguemnet
 * @argv: Second arguement
 * Return: Return a value on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}

	}
	printf("\n");
	return (0);
}
