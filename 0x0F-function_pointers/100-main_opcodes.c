#include <stdio.h>
#include <stdlib.h>


/**
*main - Entry point
*@argc: arg count
*@argv: input
*
*Return: 0
*/

int main(int argc, char *argv[])
{
	int (*p)(int, char **) = &main;
	unsigned char cop;
	int a, b = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}


	for (; b < a; b++)
	{
		cop = *(unsigned char *)p;
		printf("%.2x", cop);


		if (b == a - 1)
			continue;
		printf(" ");


		p++;
	}


	printf("\n");
	return (0);
}
