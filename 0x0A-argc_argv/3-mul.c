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
int num1, num2, result;
if (argc != 3)
{
puts("Error");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
