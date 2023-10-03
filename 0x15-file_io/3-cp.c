#include "main.h"

void checkIO(int result, int fileDescriptor, char *filename, char status);

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
int srcFile, destFile, bytesRead, bytesWritten, closeSrc, closeDest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
srcFile = open(argv[1], O_RDONLY);
checkIO(srcFile, -1, argv[1], 'O');
destFile = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
checkIO(destFile, -1, argv[2], 'W');
while ((bytesRead = read(srcFile, buffer, sizeof(buffer))) > 0)
{
bytesWritten = write(destFile, buffer, bytesRead);
checkIO(bytesWritten, -1, argv[2], 'W');
}
closeSrc = close(srcFile);
checkIO(closeSrc, srcFile, NULL, 'C');
closeDest = close(destFile);
checkIO(closeDest, destFile, NULL, 'C');
return (0);
}

/**
 * checkIO - checks and handles I/O errors
 * @result: the result of the operation (e.g., open, read, write, close)
 * @fileDescriptor: the file descriptor for the file being operated on
 * @filename: a pointer to the filename
 * @status: 'O' for open, 'W' for write, 'C' for close
 */
void checkIO(int result, int fileDescriptor, char *filename, char status)
{
if (status == 'C' && result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descrip %d\n", fileDescriptor);
exit(100);
}
else if (status == 'O' && result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
exit(98);
}
else if (status == 'W' && result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
}
