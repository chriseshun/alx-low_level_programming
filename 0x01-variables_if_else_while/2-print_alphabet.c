#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - starting point
 * Description: printing lowercase
 * Return: Always end with 0
 *
 */
int main(void)
{
char letter;
for (letter ='a'; letter <= 'z'; letter++)
{putchar(letter);
}
putchar('\n');
return (0);
}
