#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "AEOTL";
char *leet_replacements = "43071";
int i, j;

while (*ptr != '\0')
{
for (i = 0, j = 0; leet_chars[i] != '\0'; i++, j++)
{
if (*ptr == leet_chars[i] || *ptr == leet_chars[i] + 32)
{
*ptr = leet_replacements[j];
break;
}
}
ptr++;
}

return (str);
}
