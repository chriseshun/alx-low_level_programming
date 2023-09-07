#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 for success, 1 for error
 */

int main(int argc, char *argv[])
{
	int i, s = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			s *= atoi(argv[i]);
		}
		printf("%d\n", s);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
