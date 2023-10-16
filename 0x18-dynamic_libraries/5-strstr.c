#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring.
 * @needle: The substring to search for.
 * @haystack: The major string
 * Return: Return NULL
 */
char *_strstr(char *haystack, char *needle)
{
        int i;
        int j;

        for (i = 0; haystack[i] != '\0'; i++)
        {
                for (j = 0; needle[j] != '\0'; j++)
                {
                        if (haystack[i + j] != needle[j])
                        {
                                break;
                        }
                }
                if (needle[j] == '\0')
                {
                        return (haystack + i);
                }
        }
        return (NULL);
}
