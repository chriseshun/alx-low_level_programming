#include "function_pointers.h"

/**
*int_index - function that searches for an integer
*@array: the array of integer
*@size: array size
*@cmp: the function pointer
*
*Return:  index of the first element for cmp function or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; size > x; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
