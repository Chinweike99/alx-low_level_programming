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

	for (i = 0; i <= height; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));
		if (ptr[i] == NULL)
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
