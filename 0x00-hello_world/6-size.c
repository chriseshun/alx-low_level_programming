#include <stdio.h>
/**
 * main - the starting point
 * Description: prints the size of various types
 * Return: Always end with 0
 */
int main(void)
{
  printf("size of a char: %d bytes\n", sizeof(char));
  ptintf("size of an int: %d bytes\n", sizeof(int));
  printf("size of a long int: %ld bytes\n", sizeof(long));
  printf("size of a long long int: %lld bytes\n", sizeof(long long int));
  printf("size of a float: %f bytes\n", sizeof(float));
  return (0);
}
