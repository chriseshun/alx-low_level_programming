#include "main.h"

/**
 * print_array - prints n elements of an array
 * @array: input array
 * @length: length of array
 *
 * Return: void
 */
void print_array(int *array, int length)
{
int i;
for (i = 0; i < length; i++)
{
printf("%d", array[i]);       
if (i != length - 1)
{
printf(", ");
}
}  
putchar('\n');
}
