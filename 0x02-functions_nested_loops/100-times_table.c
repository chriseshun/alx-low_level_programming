#include "main.h"

/**
 * print_times_table - prints the n times table
 * @num: number of the timess table
 */
void print_times_table(int num)
{
int m, n, o;

if (num >= 0 && num <= 15)
{
for (m = 0; m <= num; m++)
{
for (n = 0; n <= num; n++)
{
o = n * m;
if (n == 0)
{
_putchar(o + '0');
}
else if (o < 10 && n != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(o + '0');
}
else if (o >= 10 && o < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((o / 10) + '0');
_putchar((o % 10) + '0');
}
else if (o >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((o / 100) + '0');
_putchar(((o / 10) % 10) + '0');
_putchar((o % 10) + '0');
}
}
_putchar('\n');
}
}
}
