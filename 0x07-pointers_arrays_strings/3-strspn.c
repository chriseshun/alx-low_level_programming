#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string of accepted bytes.
 *
 * Return: The number of bytes in the initial segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int found;
while (*s != '\0')
{
found = 0;
for (char *a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
found = 1;
break;
}
}
if (found == 0)
return (length);
length++;
s++;
}
return (length);
}
