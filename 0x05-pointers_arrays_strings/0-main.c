#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int m;

    m = 402;
    printf("m=%d\n", m);
    reset_to_98(&m);
    printf("m=%d\n", m);
    return (0);
}
