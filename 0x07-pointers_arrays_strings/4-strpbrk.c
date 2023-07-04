#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search in.
 * @accept: Pointer to the string containing the accepted bytes.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in @accept
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (NULL);
}
