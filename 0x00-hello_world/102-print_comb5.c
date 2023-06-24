#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Descriptoin: prints all possible differnt combinations of two digits
 * Return: set at 0 
 */

int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 100; d1++)
	{
		for (d2 = d1; d2 < 100; d2++)
		{
			putchar((d1 / 10) + '0');
			putchar((d1 % 10) + '0');
			putchar(' ');
			putchar((d2 / 10) + '0');
			putchar((d2 % 10) + '0');

			if (d1 != 99 || d2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

