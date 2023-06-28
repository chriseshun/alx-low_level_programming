#include "main.h"

/**
 * more_numbers - points 0 - 14
 *
 * Return: use void
 */
void more_numbers(void)
{
    int row, column;

    for (row = 0; row < 10; row++)
    {
        for (column = 0; column <= 14; column++)
        {
            if (column >= 10)
            {
                _putchar('1');
                _putchar(column % 10 + '0');
            }
            else
            {
                _putchar(column + '0');
            }
        }
        _putchar('\n');
    }
}
