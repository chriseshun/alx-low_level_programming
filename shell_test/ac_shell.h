#ifndef AC_SHELL_H
#define AC_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

extern char **environ;
void ac_print(const char *message);
char *pathdir(char *cmd);
void display_prompt(void);
void print_environment();


#endif
