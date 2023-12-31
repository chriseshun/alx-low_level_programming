#include "main.h"


/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: starts at 0 of bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int setbit;

	if (index > 63)
		return (-1);

	setbit = 1 << index;
	*n = (*n | setbit);
	return (1);
}
