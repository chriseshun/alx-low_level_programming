#include "ac_shell.h"
/**
 * ac_print: prints out 
 *
 */


void ac_print(const char *message) 
{
  
  write(STDOUT_FILENO, message, strlen(message));

}
