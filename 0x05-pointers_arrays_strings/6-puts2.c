#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string
 *
 * Return: void
 */
void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
if (index % 2 == 0)
{
_putchar(str[index]);
}
index++;
}
_putchar('\n');
}
