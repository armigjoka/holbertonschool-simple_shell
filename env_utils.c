#include "shell.h"
/**
 * _printenv - called from main
 * Return: int
 */
int _printenv(void)
{
	str = environ[0];
	while (str[i] != '\0')
	{
		/** 1 means standard output */
		write(1, str, _strlen(str));
		write(1, "\n", 1);
		str = enivron[i++];
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
	
	len = _strlen(name);
	while (environ[i] != NULL)
		if (_str_n_cmp(environ[i], name, len) == 0)
			return (environ[i][len]);
	return (NULL);
}
