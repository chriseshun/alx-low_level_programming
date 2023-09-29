#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
char *memory_location;
unsigned int value = 1;

memory_location = (char *)&value;
return ((int)*memory_location);
}
