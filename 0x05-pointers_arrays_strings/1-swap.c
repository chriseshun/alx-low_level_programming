#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @num1_ptr: pointer to the first integer
 * @num2_ptr: pointer to the second integer
 *
 * Return: void
 */
void swap_int(int *num1_ptr, int *num2_ptr)
{
int temp = *num1_ptr;
*num1_ptr = *num2_ptr;
*num2_ptr = temp;
}
