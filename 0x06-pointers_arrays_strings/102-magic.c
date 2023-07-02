#include <stdio.h>
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10 != 0)
{
print_number(n / 10);
}

_putchar('0' + (n % 10));
}

int main()
{
int a[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
int *p;
p = &a[0];

while (p <= &a[11])
{
_putchar(*p);
p++;
}

printf("a[2] = %d\n", *(a + 2));

return (0);
}
