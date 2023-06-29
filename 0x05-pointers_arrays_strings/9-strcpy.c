#include "main.h"
/**
 * _strcpy- copy the string pointed 
 * @destination: char to check
 * @source: char to check
 * Return: Always end with 0
 */
char *_strcpy(char *destination, char *source)
{
int index;
for (index = 0; source[index] != '\0'; index++)
destination[index] = source[index];
destination[index] = '\0';
return (destination);
}
