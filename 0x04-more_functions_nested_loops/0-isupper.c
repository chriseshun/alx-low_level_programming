#include "main.h"

/**
 * _isupper - Check if a character is uppercase.
 *
 * Description: Checks whether the given character is an uppercase letter.
 *
 * @ch: The character to be checked.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

