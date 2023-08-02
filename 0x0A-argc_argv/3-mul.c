#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a * b;
printf("%d\n", c);
return (0);
}
