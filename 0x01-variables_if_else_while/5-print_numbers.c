#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers
 * Return: Always end with 0
 *
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{ putchar(number + '0'); }
putchar('\n');
return (0);
}
