#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints out a string of characters
 * @s: The string to be printed out
*/
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n');
        return;
    }

    putchar(*s);
    _puts_recursion(s + 1);
}
