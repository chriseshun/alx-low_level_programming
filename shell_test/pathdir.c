#include "ac_shell.h"

char *pathdir(char *cmd) {
    char *path = getenv("PATH");
    char *pathdublicate;
    char cmd_dir[1024];
    char *result = NULL;

    if (path == NULL) {
        perror("Error getting PATH");
        return NULL;
    }

    pathdublicate = strdup(path);
    if (pathdublicate == NULL) {
        perror("Error duplicating PATH");
        return NULL;
    }

    {

    char *ddir = strtok(pathdublicate, ":");
    while (ddir != NULL) {
        strcpy(cmd_dir, ddir);
        if (cmd_dir[strlen(cmd_dir) - 1] != '/') {
            strcat(cmd_dir, "/");
        }

        strcat(cmd_dir, cmd);

        if (access(cmd_dir, X_OK) == 0) {
            result = strdup(cmd_dir);
            break;
        }

        ddir = strtok(NULL, ":");
    }

    }

    free(pathdublicate);

    return result;
}
