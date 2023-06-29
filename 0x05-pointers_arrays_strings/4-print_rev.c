#include "main.h"

/**
*print_rev - prints a string in reverse
*
*@str: the string to be printed in rev
*/

void print_rev(char *str)
{
	int n, m;

	m = 0;
	while (str[m] != '\0')
		m++;

	for (n = m - 1; n >= 0; n--)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
