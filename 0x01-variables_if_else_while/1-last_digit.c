#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of code
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	int lastN = n % 10;
	if (lastN > 5)
	{
		printf("%d is %d and is greater than 5\n", n, lastN);
	}
	else if (lastN > 0 && lastN < 6)
	{
		printf("%d is %d and is less than 6 and not 0\n", n, lastN);
	}
	else
	{
		printf("%d is %d and is 0\n", n, lastN);
	}
        return (0);
}
