#include "main.h"
/**
 * char *_strcpy - function that copies the string pointed to by src,
 * @dest: copy to
 * @src: Copy From
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
        int m = 0;
        int x = 0;

        while (*(src + m) != '\0')
        {
                m++;
        }
        for (; x < m; x++)
        {
                dest[x] = src[x];
        }
        dest[m] = '\0';
        return (dest);
}
