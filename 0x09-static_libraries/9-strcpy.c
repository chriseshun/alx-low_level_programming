#include "main.h"
/**
 * _strcpy- copy the string pointed
 * @dest: char to check
 * @src: char to check
 * Return: Always end with 0
 */
char *_strcpy(char *dest, char *src)
{
int index;
for (index = 0; src[index] != '\0'; index++)
dest[index] = src[index];
dest[index] = '\0';
return (dest);
}
