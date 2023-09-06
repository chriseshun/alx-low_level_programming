#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: number of input
 * @argv: array of string values
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
        if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        int mul = num1 * num2;

        printf("%d\n", mul);

        return (0);
}
