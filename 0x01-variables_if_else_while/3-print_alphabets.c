#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: printing lowercase and uppercase
 * Return: always end with 0
 *
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{ putchar(letter);}
for (letter = 'A'; letter <= 'Z'; letter++)
{putchar(letter);}
putchar('\n');
return (0);
}
