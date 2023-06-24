#include "main.h"
/**
 * print_alphabet - entry point
 * description: print alphabet in lowercase
 * Return: void
 */
int main(void)
{
print_alphabet();
return 0;
}

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
}
