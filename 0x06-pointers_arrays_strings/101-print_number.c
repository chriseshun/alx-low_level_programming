#include "main.h"

/**
*print_number - prints intergers
*@m: integer parameter
*Return: 0
*/

void print_number(int m)
{
unsigned int n1;

n1 = m;

if (m < 0)
{
_putchar('-');
n1 = -m;
}

if (n1 / 10 != 0)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
