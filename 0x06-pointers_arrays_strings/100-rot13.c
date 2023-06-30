#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
char *ptr = str;
int i;

while (*ptr != '\0')
{
for (i = 0; i < 13; i++)
{
if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
{
*ptr += 13;
break;
}
else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
{
*ptr -= 13;
break;
}
}
ptr++;
}

return (str);
}
