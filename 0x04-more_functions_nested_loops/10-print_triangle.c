#include "main.h"
/**
 * print_number - prints a triangle
 * @size: size to be printed
 */
void print_triangle(int size) 
{
if (size <= 0) 
{
_putchar('\n');
 return ;
}
for (int i = 0; i < size; i++)
{
for (int j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
