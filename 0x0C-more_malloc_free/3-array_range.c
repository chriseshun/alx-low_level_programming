#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers.
 * @min: Minimum input
 * @max: Maximum input
 *
 * Return: A pointer to the allocated array, or NULL if it fails
 */
int *array_range(int min, int max)
{
    int *T, N = 0; // Changed a to T and m to N
    int sum;

    if (min > max)
    {
        return (NULL);
    }

    sum = (max - min) + 1;
    T = malloc(sizeof(int) * sum);

    if (T == NULL)
    {
        return (NULL);
    }
    
    while (min <= max)
    {
        *(T + N) = min++;
        N++;
    }
    
    return (T);
}
