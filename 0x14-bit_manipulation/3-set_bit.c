#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: starts at 0 of bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int bit_to_set;
if (index > 63)
return (-1);
bit_to_set = 1 << index;
*n = (*n | bit_to_set);
return (1);
}
