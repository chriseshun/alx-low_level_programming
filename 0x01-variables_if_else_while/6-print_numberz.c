#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers of base 10
 * Return: Always end with 0
 *
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
putchar('0' + n);
putchar('\n');
return (0);
}
