#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @str: the string to be printed in reverse
 */
void print_rev(char *str)
{
    int length = 0;
    while (str[length] != '\0')
        length++;

    for (int i = length - 1; i >= 0; i--)
    {
        _putchar(str[i]);
    }
    
    _putchar('\n');
}
