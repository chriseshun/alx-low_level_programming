#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	for (a = 1; a < argc; ++a)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c += atoi(*(argv + a));
	}
	printf("%d\n", c);
	return (0);
}
