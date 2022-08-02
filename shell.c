#include "shell.h"
char *name;
/**
 * main - point of entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if successful | 0 otherwise
 */
int main(int __attribute__ ((unused))argc, char **argv)
{
	char *line = NULL;
	size_t buf_size = 0;
	ssize_t chars = 0;

	name = argv[0];
	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(1, "$ ", 2);
		chars = getline(&line, &buf_size, stdin);
		if (chars == -1)
		{
			if (isatty(STDIN_FILENO) == -1)
				write(1, "\n", 1);
			break;
		}
		if (line[chars - 1] == '\n')
			line[chars - 1] = '\0';
		if (*line == '\0')
			continue;
		if (command_read(line, chars) == 2)
			break;
	}
	free(line);
	line = NULL;
	return (0);
}
/**
 * command_read - called from main
 * @s: string
 * @characters: size_t
 * Return: int
 */
int command_read(char *s, size_t __attribute__ ((unused))characters)
{
	char *token = NULL;
	char *cmd_array[100];
	int i = 0;

	if (strcmp(s, "exit") == 0)
		return (2);
	if (strcmp(s, "env") == 0)
		return (_printenv());

	token = strtok(s, " ");
	while (token)
	{
		cmd_array[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	cmd_array[i] = NULL;
	return (execute(cmd_array));
}
/**
 * execute - called from command_read
 * @cmd_array: array of strings
 * Return: int
 */
int execute(char *cmd_array[])
{
	char *exe_path = NULL, *cmd = NULL;
	int status;
	pid_t pid;

	cmd = cmd_array[0];
	exe_path = command_path(cmd);

	if (exe_path == NULL)
	{
		write(2, name, strlen(name));
		write(2, ": ", 2);
		write(2, cmd, strlen(cmd));
		write(2, "Command not found\n", 18);
		return (3);
	}
	pid = fork();
	if (pid < 0)
	{
		perror("error");
		return (-1);
	}
	if (pid > 0)
	{
		wait(&status);
	}
	else if (pid == 0)
	{
		if (environ)
		{
			execve(exe_path, cmd_array, environ);
			perror("error");
			exit(1);
		}
		else
		{
			execve(exe_path, cmd_array, NULL);
		}
	}
	free(exe_path);
	return (0);
}
