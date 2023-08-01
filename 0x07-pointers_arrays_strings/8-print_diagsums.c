#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the two diagonals
 * @a: pointer to the first element of the square matrix
 * @size: the size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int main = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + a[i * size + i];
		main = main + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d \n", sum, main);
}
