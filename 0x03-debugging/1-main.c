#include <stdio.h>

/**
 * main - Causes an infinite loop
 * Return: Always end with 0
 */
int main(void)
{
        int j;

        printf("Infinite loop incoming :(\n");

        j = 0;
        while (j < 10)
        {
                putchar(j);
                j++;  // Increment j to eventually satisfy the condition j < 10
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
