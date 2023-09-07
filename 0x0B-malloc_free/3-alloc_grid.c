#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: is the width of the grid
 * @height: represents the height of the grid
 * Return: NULL (failed)
 */
int **alloc_grid(int width, int height)
{
int **o;
int m = 0;
int g = 0;

if (height <= 0 || width <= 0)
return (NULL);

o = (int **)malloc(height * sizeof(int *));

if (o == NULL)
return (NULL);

for (m = 0; m < height; m++)
{
*(o + m) = (int *)malloc(sizeof(int) * width);
if (o[m] == NULL)
{
free(o);
for (g = 0; g <= m; ++g)
free(o[g]);
return (NULL);
}
}

for (m = 0; m < height; m++)
{
for (g = 0; g < width; g++)
{
o[m][g] = 0;
}
}
return (o);
}
