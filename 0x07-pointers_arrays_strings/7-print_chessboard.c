#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: The array of chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
