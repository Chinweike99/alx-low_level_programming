#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: a pointer to the string for which we want to find the length
 * @accept: pointer to the string containing characters
 * Return: Return string s
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i;
        unsigned int j;

        while (*s != '\0')
        {
                s++;
                i++;
        }
        while (*accept != '\0')
        {
                accept++;
                j++;
        }
        return (0);
}
