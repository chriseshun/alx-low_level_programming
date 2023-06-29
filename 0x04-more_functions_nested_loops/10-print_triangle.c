#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
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
		}
	}
}
