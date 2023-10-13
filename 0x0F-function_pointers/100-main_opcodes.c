#include "function_pointers.h"
/**
 */
void print_opcodes(int num)
{
	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i = 0;

	while (i < num)
	{
		printf("%02x", ptr[i]);
		i++;
	}
	printf("\n");
}

/**
 */

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		return (-1);
	}
	int num = atoi(argv[1]);

	if (num < 0)
	{
		return (-1);
	}
	_print_opcodes(num);

	return (0);
}
