#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints all possible combinations of two two-digit numbers
 * Return: Always ends with 0
 */
int main(void)
{
int i, j;
for (i = 0; i <= 99; i++)
{
for (j = 10; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
