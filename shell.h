#ifndef _SHELL_H
#define _SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <dirent.h>

extern char **environ;
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strncmp(char *s1, char *s2, unsigned long n);
char *_strdup(char *str);
int _getenv(int argc, char *argv[], char *p_env[]);
void _printenv(char **environ);

#endif
