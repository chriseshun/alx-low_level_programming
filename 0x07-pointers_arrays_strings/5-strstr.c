#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: The string to search.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
