#include "main.h"

/**
*print_rev - prints a string in reverse
*
*@s: the string to be printed in rev
*/

void print_rev(char *s)
{
	int h, t;

	t = 0;
	while (s[t] != '\0')
		t++;

	for (h = t - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
