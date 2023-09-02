#include "main.h"
/**
 * _strlen - return the length of string
 * @str: char to check string
 * Return: Always end with 0
 */
int _strlen(char *str)
{
int length = 0;
while (*str != '\0')
{
length++;
str++;
}
return (length);
}
