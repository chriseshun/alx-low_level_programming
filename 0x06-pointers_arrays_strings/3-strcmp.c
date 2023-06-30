#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Difference in ASCII value of the first differing character
 */
int _strcmp(const char *s1, const char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
