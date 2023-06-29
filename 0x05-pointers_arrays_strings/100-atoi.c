#include "main.h"
/**
 * _atoi - convert a string to integer
 * @str: Pointer to convert
 * Return : integer
 */
int _atoi(char *str)
{
int index = 0;
unsigned int number = 0;
int sign = 1;
int isNumber = 0;
while (str[index])
{
if (str[index] == 45)
{
sign *= -1;
}
while (str[index] >= 48 && str[index] <= 57)
{
isNumber = 1;
number = (number * 10) + (str[index] - '0');
index++;
}
if (isNumber == 1)
{
break;
}
index++;
}
number *= sign;
return (number);
}
