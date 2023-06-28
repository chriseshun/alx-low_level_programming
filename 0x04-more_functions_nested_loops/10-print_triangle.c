#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void _putchar(char c) {
putchar(c);
}

void print_triangle(int size) {
if (size <= 0) {
_putchar('\n');
return;
}

for (int i = 1; i <= size; i++) {
for (int j = 1; j <= i; j++) {
_putchar('#');
}
_putchar('\n');
}
}

int main() {
int size = 5;
print_triangle(size);
return (0);
}
