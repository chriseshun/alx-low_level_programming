#include "main.h"

/**
 * flip_bits - returns bit value required to flip numbers
 * @n: first num
 * @m: 2nd num
 * Return: total num of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int bitCount = 0;

for (; n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
bitCount++;
}

return (bitCount);
}
