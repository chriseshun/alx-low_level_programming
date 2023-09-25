#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: argument counter
*@argv: argument vector
*
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int a;
	int b;
	char *cop;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	cop = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(cop) == NULL || cop[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*cop == 47 && b == 0) ||
	    (*cop == 37 && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(cop)(a, b));
	return (0);
}
