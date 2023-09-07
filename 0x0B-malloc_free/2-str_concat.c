#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Pointer to a new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
unsigned int n = 0, m = 0, o = 0, p = 0;
char *new;

while (s1 && s1[o])
o++;
while (s2 && s2[p])
p++;

new = malloc(sizeof(char) * (1 + o + p));

if (new == NULL)
return (NULL);

n = 0;
m = 0;

if (s1)
{
while (n < o)
{
*(new + n) = *(s1 + n);
n++;
}
}

if (s2)
{
while (n < (o + p))
{
*(new + n) = *(s2 + m);
++n;
++m;
}
}

new[n] = '\0';
return (new);
}
