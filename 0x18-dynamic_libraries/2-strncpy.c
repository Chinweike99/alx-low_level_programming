#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: The destination for copy
 * @src: The source to be copied from
 * @n: Compared later
 * Return: Always 0 success
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i;

        i = 0;
        while (i < n && src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        while (i < n)
        {
                dest[i] = '\0';
                i++;
        }
        return (dest);
}
