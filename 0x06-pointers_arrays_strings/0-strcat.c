#include "main.h"
/**
 * _strcat - concatenates with strings
 * @dest: Pointers to the destination string
 * @src: Pointer ti the source
 * 
 * Return: Points to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *dest_start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (dest_start);
}
