#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @num1: first number
 * @num2: second number
 * @num3: third number
 * Return: largest number
 */

int largest_number(int num1, int num2, int num3)
{
    int largest;

    if (num1 > num2 && num1 > num3)
    {
        largest = num1;
    }
    else if (num2 > num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    return (largest);
}

