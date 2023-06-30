#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string
 * @str: Pointer to the string to be capitalized
 *
 * Return: Pointer to the capitalized string
 */
char *cap_string(char *str)
{
char *ptr = str;
int capitalize_next = 1;

while (*ptr != '\0')
{
if (capitalize_next && islower(*ptr))
*ptr = toupper(*ptr);

capitalize_next = 0;

if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' ||
*ptr == '!' || *ptr == '?' || *ptr == '"' ||
*ptr == '(' || *ptr == ')' || *ptr == '{' ||
*ptr == '}') {
capitalize_next = 1;
}

ptr++;
}

return (str);
}
