#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: printing lowercase using putchar
 * Return: always end with 0
 *
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{ if (letter != 'q' && letter != 'e')
{ putchar(letter); }
}
putchar('\n');
return (0);
}
