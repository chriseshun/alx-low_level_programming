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
		int h, c;

		for (h = 1; h <= size; h++)
		{
			for (c = h; c < size; c++)
			{
				_putchar(' ');
			}

			for (c = 1; c <= h; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
