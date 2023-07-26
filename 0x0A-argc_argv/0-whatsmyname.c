#include <stdio.h>
#include "main.h"

/**
 * print_program_name - Prints the program name.
 * @name: The name of the program.
 */
void print_program_name(char *name)
{
printf("%s\n", name);
}
int main(int argc, char *argv[])
{
print_program_name(argv[0]);
return (0);
}
