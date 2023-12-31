#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input value
 * @height: input value
 * Return: N/A
 */
void free_grid(int **grid, int height)
{
int d = 0;

for (; d < height; ++d)
{
free(*(grid + d));
}
free(grid);
}
