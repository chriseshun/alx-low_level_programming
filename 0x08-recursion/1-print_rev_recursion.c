#include "main.h"

/**
 * _print_rev_recursion - print a string in a reverse form
 * @s: print the string
 */

void _print_rev_recursion(char *s);
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}