#include "shell.h"
/**
 * _printenv - function that prints the environmental variables
 * Return: 0
 */
int _printenv(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	return (0);
}

/**
 * _getenv - called from main
 * @name: string
 * Return: string
 */
char *_getenv(char *name)
{
	int i = 0, len;

	len = strlen(name);
	while (environ[i] != NULL)
	{
		if (strncmp(environ[i], name, strlen(name)) == 0)
			return (&environ[i][len]);
		i++;
	}
	return (NULL);
}
