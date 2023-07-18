#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if(j != 1)
			{
				for (int k = 0; k <= 9; k++)
				{
					if (k != n && k !=j)
					{
						putchar('0' + n);
					       	putchar('0' + j);
					       	putchar('0' + k);
					       	putchar(' ');
						if (n != 9 || j != 8 || k != 7)
						{
							putchar(' ');
						}
					}
				}
			}
		}
	}
}
