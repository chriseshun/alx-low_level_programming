#include "main.h"
/**
 * print_alphabet - entry point
 * description: print alphabet in lowercase
 * Return: void
 */

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
