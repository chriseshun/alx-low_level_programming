#include "main/h"
#include <stddef.h>
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to search in.
 * @accept: Pointer to the string containing the accepted characters.
 *
 * Return: Number of bytes in the initial segment of @s which consist only of
 *         bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, match;
match = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match++;
break;
}
}
if (accept[j] == '\0')
break;
}
return (match);
}
