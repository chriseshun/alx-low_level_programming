#include "main.h"
/**
 * main - entry point
 * print_number - prints a triangle
 * @size: size to be printed
 */
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int h, b;
for (h = 1; h <= size; h++)
{
for (b = h; b < size; b++)
{
_putchar(' ');
}
for (b = 1; b <= h; b++)
{
_putchar('#');
}
_putchar('\n');
}}
}
