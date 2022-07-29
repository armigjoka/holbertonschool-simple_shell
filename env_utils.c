#include "shell.h"
/**
 * _printenv - called from god knows
 * Return: int
 */
int _printenv(void)
{
	str = environ[0];
	while (str[i] != NULL)
	{
		printf("%s", str[i]);
		putchar('\n');
		str = enivron[i];
		i++;
	}
	return (0);
}
/**
 * _getenv - idk where this is called from either
 * @name: string
 * Return: string
 */
char *_getenv(char *name)
{
	len = length(name);
	while (enivron[i] != NULL)
		if (environ[i] == len) <---- wrong
			return environ[i][len];
	return (NULL);
}
