#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints all possible combinations of single-digit numbers
 * Return: Always end with 0
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i != 0)
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
}
putchar('\n');
return (0);
}
