#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return:  0 (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int limit = 1000000000;
	unsigned long int x1;
	unsigned long int x2;
	unsigned long int y1;
	unsigned long int y2;

	printf("%lu", x);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", y);
		y += x;
		x = y - x;
	}

	x1 = (x / limit);
	x2 = (x % limit);
	y1 = (y / limit);
	y2 = (y % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", y1 + (y2 / limit));
		printf("%lu", y2 % limit);
		y1 = y1 + x1;
		x1 = y1 - x1;
		y2 = y2 + x2;
		x2 = y2 - x2;
	}
	printf("\n");
	return (0);
}
