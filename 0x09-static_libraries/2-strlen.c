#include "main.h"
/**
 * _strlen - return the length of string
 * @s: char to check string
 * Return: Always end with 0
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
