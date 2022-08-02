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
	int i = 0;
	struct stat buf;

	new_path = malloc(sizeof(char) * 100);
	if (_getenv("PATH")[0] == ':')
		if (stat(cmd, &buf) == 0)
			return (_strdup(cmd));
	while (tokens != NULL)
	{
		path_array[i] = tokens;
		tokens = strtok(NULL, ":");
		i++;
	}
	path_array[i] = NULL;
	for (i = 0; path_array[i]; i++)
	{
		_strcpy(new_path, path_array[i]);
		_strcpy(new_path, "/");
		_strcpy(new_path, cmd);
		_strcpy(new_path, "\0");
		i++;
	}
	if (stat(new_path, &buf) == 0)
	{
		free(path);
		return(new_path);
	}
	else
	{
		new_path[0] = 0;
	}
	free(path);
	free(new_path);
	if (stat(cmd, &buf) == 0)
		return(_strdup(cmd));
	return (NULL);
}
