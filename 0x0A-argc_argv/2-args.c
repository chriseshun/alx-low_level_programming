#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the arguments passed into the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int ac, char *av[])
{
int i;
for (i = 0; i < ac; i++)
{
printf("%s\n", av[i]);
}
return (0);
}
