#include "main.h"
/**
 * _strcmp - a function that compares two strings.
 * @s1: Input Value to be compared
 * @s2: Second value to compared
 * Return: Always return 0
 */
int _strcmp(char *s1, char *s2)
{
        int flag = 0;
        int i;

        for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
        {
                if (s1[i] != s2[i])
                {
                        flag = 1;
                        break;
                }
        }
        if (flag == 1)
        {
                return (0);
        }
        return (flag);
}
