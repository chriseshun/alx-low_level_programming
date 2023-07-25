#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number using recursion.
 * @n: The input number.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 0 || n == 1)
return (n);

return (helper_sqrt(n, 1, n));
}
/**
 * helper_sqrt - Helper function to find the natural square root using binary search.
 * @n: The input number.
 * @start: The starting value for binary search.
 * @end: The ending value for binary search.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural square root.
 */
int helper_sqrt(int n, int start, int end)
{
if (start <= end)
{
int mid = (start + end) / 2;

if (mid * mid == n)
return (mid);

if (mid * mid > n)
return (helper_sqrt(n, start, mid - 1));

return (helper_sqrt(n, mid + 1, end));
}

return (end);
}
