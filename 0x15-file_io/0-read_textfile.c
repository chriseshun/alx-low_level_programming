#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of file to read (change this to your desired file path)
 * @letters: number of letters to be read and printed
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor, x, vault;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
file_descriptor = open(filename, O_RDONLY);
if (file_descriptor == -1)
{
free(buffer);
return (0);
}
vault = read(file_descriptor, buffer, letters);
if (vault == -1)
{
close(file_descriptor);
free(buffer);
return (0);
}
for (x = 0; x < vault; x++)
{
if (write(STDOUT_FILENO, &buffer[x], 1) == -1)
{
close(file_descriptor);
free(buffer);
return (0);
}
}
close(file_descriptor);
free(buffer);
return (vault);
}
