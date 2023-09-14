#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: A pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x, y;
char *q;
if (nmemb == 0 || size == 0)
return (NULL);
y = nmemb * size;
q = malloc(y);
if (q == NULL)
return (NULL);
for (x = 0; x < y; x++)
{
*(q + x) = 0;
}
return (q);
}
