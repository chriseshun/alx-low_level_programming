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
for (i = 0; i < 10; i++) {
putchar(i + '0');
if (i != 9) {
putchar(',');
putchar(' ');
}
}
return (0);
}