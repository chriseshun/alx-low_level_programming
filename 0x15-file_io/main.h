#ifndef MAIN_H
#define MAIN_H


#define BUFFER_SIZE 1024


#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>
#include <elf.h>


int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void checks_IO(int new, int def, char *filename, char status);
int main(int argc, char *argv[]);


#endif
