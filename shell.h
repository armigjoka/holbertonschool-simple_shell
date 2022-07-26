#ifndef _SHELL_H
#define _SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

extern char **environ;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_getenv(char *name);
int _printenv(void);
int _str_n_cmp(char *s1, char *s2, int n);
char *command_path(char *cmd);
int execute(char *cmd_array[]);
int command_read(char *s, size_t __attribute__ ((unused))characters);

#endif
