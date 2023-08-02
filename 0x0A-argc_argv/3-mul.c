#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2  arguments
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
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
