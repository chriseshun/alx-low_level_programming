#include "main.h"

/**
*_isdigit - this checks for digits 0-9
*
*@c: the digit to be checked
*Return: 1 if digit otherwise 0.
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
