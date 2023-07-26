#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print name of program
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: Always return 0
 */

int main(int num_arguments, char *argument_values[])
{
(void)num_arguments;
printf("%s\n", *(argument_values + 0));
return (0);
}
