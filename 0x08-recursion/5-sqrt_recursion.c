#include "main.h"
#include <math.h>

/**
 * square_root_check - Recursively checks for the square root of a number.
 * @guess: The current guess for the square root.
 * @number: The number to find the square root of.
 *
 * Return: -1 if there is no natural square root, otherwise return the square root.
 */

int square_root_check(int guess, int number)
{
if (guess * guess == number)
return (guess);
if (guess * guess > number)
return (-1);
return (square_root_check(guess + 1, number));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number using recursion.
 * @n: The integer to find the square root of.
 *
 * Return: The natural square root of n, or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (square_root_check(1, n));
}
