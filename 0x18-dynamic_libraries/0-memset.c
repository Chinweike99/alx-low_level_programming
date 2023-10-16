#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: a pointer that tells the function where your container is.
 * @b: information to put in each box
 * @n: a number that tells the function how many boxes needed
 * Return: Always 0 sucess
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i = 0;
        unsigned int j = 0;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }
        while (j < n)
        {
                b = s[j];
                j++;
        }
        return (s);
}
