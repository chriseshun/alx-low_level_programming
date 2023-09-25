#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
*print_strings - Prints strings, followed by a new line.
*@separator: The string to be printed between strings.
*@n: The number of strings passed to the function.
*@...: A variable number of strings to be printed.
*
*Description: If separator is NULL, it is not printed.
*              If one of the strings if NULL, (nil) is printed instead.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ST = 0;
	va_list args;
	char *str;


	if (n >= 1)
	{
		va_start(args, n);
		while (n > ST)
		{ str = va_arg(args, char *);
			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);
			if (n - 1 != ST && separator != NULL)
				printf("%s", separator);
			ST++;
		}

		va_end(args);
	}
	printf("\n");
}
