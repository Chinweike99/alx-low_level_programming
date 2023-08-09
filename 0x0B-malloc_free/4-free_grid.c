#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a grid of integers
 * @grid: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int **ptr;
	int i;
	int j;

	if (**grid <= 0)
	{
		printf("NULL");
	}
	for (i = 0; i <= height; i++)
	{
		ptr = (int **)malloc(height * sizeof(int));
		if (ptr == NULL)
		{
			for (j = 0; j < i;  j++)
			{
				free(ptr[j]);
			}
			free(ptr);
		}
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	free(ptr);
}
