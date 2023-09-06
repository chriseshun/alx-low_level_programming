#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- entry
 * @argc: number of input
 * @argv: array of string values
 * Return: 0 success
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
