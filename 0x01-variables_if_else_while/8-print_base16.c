#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Print all the numbers in base 16 in lowercase
 * Return: Always end with o
 */
int main(void)
{
char digit;
for (digit = '0'; digit <= '9'; digit++)
putchar(digit);
for (digit = 'a'; digit <= 'f'; digit++)
putchar(digit);
putchar('\n');
return (0);
}
