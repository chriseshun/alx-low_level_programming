#include "main.h"
/**
 * _strncpy - Copies a string with a specified limit
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to be copied from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
char *dest_start = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}
