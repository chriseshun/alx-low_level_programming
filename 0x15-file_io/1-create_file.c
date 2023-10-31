#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @file_name: The name of the file to create.
 * @content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *file_name, char *content)
{
int file_des = 0;
int text_length = 0;
if (file_name == NULL)
return (-1);
file_des = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_des == -1)
return (-1);
if (content)
{
while (content[text_length] != '\0')
++text_length;
if (write(file_des, content, text_length) == -1)
return (-1);
}
close(file_des);
return (1);
}
