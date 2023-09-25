#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
*print_numbers - Prints numbers, followed by a new line.
*@separator: The string to be printed between numbers.
*@n: The number of integers passed to the function.
*@...: A variable number of numbers to be printed.
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int X = 0;
	va_list args;

	va_start(args, n);


	for (X = 0; n > X; X++)
	{
		printf("%d", va_arg(args, int));

		if (X != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
