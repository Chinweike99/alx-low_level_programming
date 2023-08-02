#include "main.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: The string to be printed
 * Return: Return s Value
 */
void _puts_recursion(char *s)
{
    if (y < 0)
    {
        return (1 / _pow_recursion(x, -y));
    }
    else if (y == 0)
    {
        return 1;
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}
