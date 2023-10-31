#include "main.h"

void checkIO(int new, int def, char *filename, char status);

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
int source, destination, bufferSize = 1024;
int bytesRead, bytesWritten, closeSrc, closeDest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
exit(97);
}
source = open(argv[1], O_RDONLY);
checkIO(source, -1, argv[1], 'O');
destination = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
checkIO(destination, -1, argv[2], 'W');
while (bufferSize == 1024)
{
bufferSize = read(source, buffer, sizeof(buffer));
if (bufferSize == -1)
checkIO(-1, -1, argv[1], 'O');
bytesWritten = write(destination, buffer, bufferSize);
if (bytesWritten == -1)
checkIO(-1, -1, argv[2], 'W');
}
closeSrc = close(source);
checkIO(closeSrc, source, NULL, 'C');
closeDest = close(destination);
checkIO(closeDest, destination, NULL, 'C');
return (0);
}

/**
 * checkIO - checks if a file can be opened or not
 * @new: checks for the file to be opened
 * @def: defines the file
 * @filename: a pointer
 * @status: shows if the file is closed or opened
 */
void checkIO(int new, int def, char *filename, char status)
{
if (status == 67 && new == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", def);
exit(100);
}
else if (status == 79 && new == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
else if (status == 87 && new == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", filename);
exit(99);
}
}
