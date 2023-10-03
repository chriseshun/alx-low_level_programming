#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: text to append.
 * Return: 1 for success, -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, text_length = 0;

if (filename == NULL)
return (-1);

file_descriptor = open(filename, O_APPEND | O_WRONLY);
if (file_descriptor == -1)
return (-1);

if (text_content)
{
while (text_content[text_length] != '\0')
text_length++;

if (write(file_descriptor, text_content, text_length) == -1)
return (-1);
}

close(file_descriptor);
return (1);
}
