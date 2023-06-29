#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factors
 * Return: Always end with 0
 */
int main(void)
{
	long int number;
	long int largest_factor;
	long int i;

	number = 612852475143;
	largest_factor = -1;

	while (number % 2 == 0)
	{
		largest_factor = 2;
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			largest_factor = i;
			number = number / i;
		}
	}

	if (number > 2)
		largest_factor = number;

	printf("%ld\n", largest_factor);

	return (0);
}
