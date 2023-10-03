#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file's name
 * @text_content: input
 *
 * Return: 1 on success, -1 (failed)
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor = 0;
int text_length = 0;

if (filename == NULL)
return (-1);
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_descriptor == -1)
return (-1);
if (text_content)
{
while (text_content[text_length] != '\0')
++text_length;
if (write(file_descriptor, text_content, text_length) == -1)
return (-1);
}
close(file_descriptor);
return (1);
}
