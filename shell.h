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
<<<<<<< HEAD
int _str_n_cmp(char *s1, char *s2, unsigned long n);
char *_strdup(char *str);

/* Enviornment variables*/
void _printenv(char **environ);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);
char *_getenv(const char *name);

/* Command path*/
char *command_path(char *cmd);
char *_strdup(char *str);
char *_getenv(char *name);
int _printenv(void);
int _str_n_cmp(char *s1, char *s2, int n);

/* main function */
int command_read(char *s, size_t _attributte_((unused)) characters);
int execute(char *cmd_array[]);
#endif
