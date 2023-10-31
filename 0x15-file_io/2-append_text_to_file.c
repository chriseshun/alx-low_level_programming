#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @file_name: is the name of the file.
 * @content: is the input text
 * Return: 1 for success, -1 for failure
 */

int append_text_to_file(const char *file_name, char *content)
{
int file_descriptor, text_length = 0;

if (file_name == NULL)
return (-1);
file_descriptor = open(file_name, O_APPEND | O_WRONLY);
if (file_descriptor == -1)
return (-1);
if (content)
{
while (content[text_length] != '\0')
text_length++;
if (write(file_descriptor, content, text_length) == -1)
return (-1);
}
close(file_descriptor);
return (1);
}
