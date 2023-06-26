#include "main.h"

/**
*_isdigit - this checks for digits 0-9
*
*@c: the digit to be checked
*Return: 1 if digit otherwise 0.
*/
int _isdigit(int c)
{
return (ord(c) >= ord('0') && ord(c) <= ord('9'));
}
