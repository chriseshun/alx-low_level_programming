#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of input arguments
 * @argv: Array of string values
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
    int sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    for (int i = 1; i < argc; i++)
    {
        char *number_str = argv[i];

        for (int j = 0; number_str[j] != '\0'; j++)
        {
            if (!isdigit(number_str[j]))
            {
                printf("Error\n");
                return (1);
            }
        }

        int number = atoi(number_str);
        sum += number;
    }

    printf("%d\n", sum);

    return (0);
}

