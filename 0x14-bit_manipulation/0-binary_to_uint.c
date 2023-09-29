#include "main.h"

/**
 * binary_to_uint - converts a binary num to an unsigned int
 * @b: is a pointer to a binary string consisting of '0's and '1's
 * Return: converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
int index, result = 0;
if (b == NULL)
return (0);
for (index = 0; b[index] != '\0'; index++)
{
if (b[index] != '0' && b[index] != '1')
return (0);
result = (result * 2) + (b[index] - '0');
}
return (result);
}
