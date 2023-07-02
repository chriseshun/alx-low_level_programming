#include <stdio.h>

/**
 * infinite_add - Adds two numbers
 * @n1: Pointer to the first number
 * @n2: Pointer to the second number
 * @r: Buffer to store the result
 * @size_r: Size of the buffer
 *
 * Return: Pointer to the result, or 0 if the result cannot be stored in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0;
int sum = 0;

int len1 = 0, len2 = 0;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;

if (len1 >= size_r || len2 >= size_r)
return (0);

while (len1 > 0 || len2 > 0)
{
sum = carry;
if (len1 > 0)
sum += (n1[len1 - 1] - '0');
if (len2 > 0)
sum += (n2[len2 - 1] - '0');

carry = sum / 10;

if (i >= size_r - 1)
return (0);

r[i] = (sum % 10) + '0';

i++;
len1--;
len2--;
}

if (carry > 0)
{
if (i >= size_r - 1)
return (0);

r[i] = carry + '0';
i++;
}

r[i] = '\0';

int j = 0;
i--;
while (j < i)
{
char temp = r[j];
r[j] = r[i];
r[i] = temp;
j++;
i--;
}

return (r);
}
