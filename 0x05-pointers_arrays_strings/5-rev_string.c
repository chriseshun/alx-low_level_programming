#include "main.h"
/**
 * rev_string - Reverses a string
 * @str: input string
 * Return: String in reverse
 */
void rev_string(char *str)
{
char temp = str[0];
int length = 0;
int counter = 0;
while (str[length] != '\0')
length++;
for (counter = 0; counter < length; counter++)
{
length--;
temp = str[counter];
str[counter] = str[length];
str[length] = temp;
}
}

