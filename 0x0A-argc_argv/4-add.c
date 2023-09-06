#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry
 * @argc: number of entry
 * @argv: array of string values
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	if (argc < 1) 
	{
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
	}
	return (0);
}
