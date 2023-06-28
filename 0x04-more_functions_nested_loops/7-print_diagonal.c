#include "main.h"

/**
 * print_diagonal -  Draws diagonal line
 * @n: number of times the character '\' should be printed
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int row, col;

for (row = 0; row < n; row++)
{
for (col = 0; col < n; col++)
{
if (col == row)
_putchar('\\');
else if (col < row)
_putchar(' ');
}
_putchar('\n');
}
}
}
