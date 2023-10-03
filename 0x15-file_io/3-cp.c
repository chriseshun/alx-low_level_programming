#include "main.h"

void checkIO(int result, int file_desc, const char *filename, char operation);

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
int sourceFD, destFD, bytesRead = 1024;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
sourceFD = open(argv[1], O_RDONLY);
checkIO(sourceFD, -1, argv[1], 'O');
destFD = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
checkIO(destFD, -1, argv[2], 'W');
while (bytesRead == 1024)
{
bytesRead = read(sourceFD, buffer, sizeof(buffer));
if (bytesRead == -1)
checkIO(-1, sourceFD, argv[1], 'O');
int bytesWritten = write(destFD, buffer, bytesRead);
if (bytesWritten == -1)
checkIO(-1, destFD, argv[2], 'W');
}
int sourceCloseResult = close(sourceFD);
checkIO(sourceCloseResult, sourceFD, NULL, 'C');
int destCloseResult = close(destFD);
checkIO(destCloseResult, destFD, NULL, 'C');
return (0);
}

/**
 * checkIO - checks if a file operation was successful or not
 * @result: the result of the file operation
 * @file_desc: the file descriptor
 * @filename: the name of the file
 * @operation: character representing the type of operation (O, W, or C)
 */
void checkIO(int result, int file_desc, const char *filename, char operation)
{
if (operation == 'C' && result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_desc);
exit(100);
}
else if (operation == 'O' && result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
exit(98);
}
else if (operation == 'W' && result == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
exit(99);
}
}
