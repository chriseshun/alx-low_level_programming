#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: name of file to read
 * @letters: number of letters to be read and printed
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int file_descriptor, bytes_read, letters_read;
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
letters_read = read(file_descriptor, buffer, letters);
if (letters_read == -1)
{
    close(file_descriptor);
    free(buffer);
    return (0);
}
for (bytes_read = 0; bytes_read < letters_read; bytes_read++)
{
    if (write(STDOUT_FILENO, &buffer[bytes_read], 1) == -1)
    {
        close(file_descriptor);
        free(buffer);
        return (0);
    }
}
close(file_descriptor);
free(buffer);
return (letters_read);
}
