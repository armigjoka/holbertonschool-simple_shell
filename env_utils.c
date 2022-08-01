#include "shell.h"
/**
 * _printenv - called from main
 * Return: int
 */
int _printenv(void)
{
	int i = 0, len;
	char *str;

	str = environ[0];
	len = _strlen(str);
	while (str[i] != '\0')
	{
		/** 1 means standard output */
		write(1, str, len);
		write(1, "\n", 1);
		str = environ[i++];
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
	{
		if (_str_n_cmp(environ[i], name, _strlen(name)) == 0)
			return (&environ[i][len]);
		i++;
	}
	return (NULL);
}
int main(void)
{
	printf("%s\n", _getenv("HOME"));
	return (0);
}
