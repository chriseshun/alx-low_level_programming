#include <stdio.h>
#include <math.h>

int is_prime(unsigned long n)
{
	unsigned long i;
	if (n < 2)
		return 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

unsigned long largest_prime_factor(unsigned long n)
{
	unsigned long i;
	for (i = sqrt(n); i >= 2; i--)
	{
		if (n % i == 0 && is_prime(i))
			return (i);
	}
	return (0);
}

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long largest_factor = largest_prime_factor(number);
	printf("%lu\n", largest_factor);
	return (0);
}
