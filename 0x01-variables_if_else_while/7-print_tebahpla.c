#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: print lowercase alphabet in reverse
 * Return: Always end with 0
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a' ; letter--)
putchar(letter);
putchar('\n');
return (0);
}
