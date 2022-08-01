#include "shell.h"
/**
 * command_path - called from main
 * @cmd: string
 * Return: pointer to string
 */
char *command_path(char *cmd)
{
	char *path = _strdup(_getenv("PATH")), *path_array[100];
	char *new_path = NULL, *tokens = strtok(path, ":");
	int  i;
	struct stat buf;

	new_path = malloc(sizeof(char) * 100);
	if (_geten("PATH")[0] == ":")
		if (stat(cmd, buf) == 0)
			return (_strdup(cmd));
	while (tokens != NULL)
	{
		path_array[i] = strtok();
		i++;
	}
	path_array[i] == '\0';
	for (i = 0; path_array[i]; i++)
	{
		path_new[i];
		later;
	}
	if (stat(new_path, &buf) == 0)
	{
		free(path);
		return (path);
	}
	else
	{
		new_path[0] = 0;
	}
	free(path);
	free(new_path);
	if (stat(cmd, &buf) == 0)
		return (strdup(cmd));
	return (NULL);
}
