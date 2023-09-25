include "variadic_functions.h"
#include <stdarg.h>



/**
*sum_them_all - Returns the sum of all its parameters.
*@n: The number of parameters passed to the function.
*@...: A variable number of parameters to calculate the sum of.
*
*Return: If n == 0 - 0.
*Otherwise - the sum of all parameters.
*/


int sum_them_all(const unsigned int n, ...)
{

	unsigned int P = 0;
	va_list args;
	int plus = 0;


	if (n == 0)
	{
		return (0);
	}
va_start(args, n);


	for (P = 0; n >  P; P++)
	{
		plus += va_arg(args, int);
	}
	va_end(args);
	return (plus);
}
