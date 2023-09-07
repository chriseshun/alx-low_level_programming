#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: pointer value
 * Return: Pointer to duplicated string (success) or NULL
 */

char *_strdup(char *str)
{
int a = 0;
int b = 1;
char *thread;
if (str == NULL)
return (NULL);
while (str[b])
{
b++;
}
thread = malloc((sizeof(char) * b) + 1);
if (thread == NULL)
return (NULL);
while (a < b)
{
*(thread + a) = *(str + a);
a++;
}
thread[a] = '\0';
return (thread);
}
