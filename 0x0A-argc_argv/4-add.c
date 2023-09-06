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
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    int sum = 0;

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
