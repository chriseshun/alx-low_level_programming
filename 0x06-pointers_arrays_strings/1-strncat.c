#include "main.h"
/**
 * _strncat - Concatenates two strings with a specified limit
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to be appended from src
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
char *dest_start = dest;

while (*dest != '\0')
{
dest++;
}

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (dest_start);
}
