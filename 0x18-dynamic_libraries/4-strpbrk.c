#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string.
 * @s: a pointer to the string that we want to search
 * @accept: a pointer to the string that contains what we want.
 * Return: Return Null
 */
char *_strpbrk(char *s, char *accept)
{
        int i;
        int j;

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                return (s);
                        }
                        accept++;
                }
                s++;
        }
        return (NULL);
}
