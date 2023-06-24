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
	int c, fD, sD, tD;

	for (c = 48; c <= 57; c++)
	{
		for (fD = 48; fD <= 57; fD++)
		{
			for (sD = 48; sD <= 57; sD++)
			{
				for (tD = 48; tD <= 57; tD++)
				{
					if (((sD + tD) > (c + fD) &&  sD >= c) || c < sD)
					{
						putchar(c);
						putchar(fD);
						putchar(' ');
						putchar(sD);
						putchar(tD);

					if (c + fD + sD + tD == 227 && c == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
