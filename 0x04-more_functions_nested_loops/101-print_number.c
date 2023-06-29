#include "main.h"

/**
 * print_number - prints an integer
 * @num: integer to be printed
 */
void print_number(int num)
{
	unsigned int num_abs;

	if (num < 0)
	{
		num_abs = -num;
		_putchar('-');
	}
	else
	{
		num_abs = num;
	}

	if (num_abs / 10)
	{
		print_number(num_abs / 10);
	}

	_putchar((num_abs % 10) + '0');
}
