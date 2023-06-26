#include "main.h"

/**
*_isupper- starting point
*
*Description: checks for uppercase character
*
*@c: the character to be checked
*
*Return: 1 if uppercase else 0 on error
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
