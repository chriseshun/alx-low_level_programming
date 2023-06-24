#include <stdio.h>

/**
 * main - Creates a list of natural numbers 
*
 * Description:  that are multiples of 3 or 5.
 *
 * Return: Always 0.
 */
int main(void)
{
   unsigned long long fib[50];
    int i;

    fib[0] = 1;
    fib[1] = 2;

    for (i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (i = 0; i < 49; i++)
    {
        printf("%llu, ", fib[i]);
    }
    printf("%llu\n", fib[49]);

    return (0);
}
