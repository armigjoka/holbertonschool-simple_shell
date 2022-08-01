#include "shell.h"
/**
 * main - point of entry
 * @argc: argument count
 * @argv: argument vector
 * Return: (void)
 */
int main(int argc, char **argv)
{
	char *line = NULL;
	ssize_t buf_size;
	int chars = 0;
	char *name = argv[0];

	while 1
	{
		if (isatty(STDIN_FILENO) == 1)
			printf("$ ");
		chars = getline(&line, &buf_size, stdin);
		if (chars == -1)
		{
			if (isatty(STDIN_FILENO) == -1)
				putchar('\n');
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
int command_read(char *s, size_t characters)
{
	char *token = NULL;
	int *cmd_array[100];
	int i = 0;

	if (cmp(s, "exit") == 0)
		return (2);
	if (cmp(s, "env") == 0)
		return (printenv);

	token = strok(s, " ");
	while (token)
	{
		cmd_array[i] = token;
		i++;
	}
	cmd_array[i] = '\0';
	return (execute(cmd_array));
}
/**
 * execute - called from command_read
 * @cmd_array: array of strings
 * Return: int
 */
int execute(char *cmd_array)
{
	char *exe_path = NULL, *cmd = NULL;

	cmd = cmd_array[0];
	exe_path = command_path[cmd];

	if (exe_path == NULL)
	{
		fprintf(stderr, "Path is null\n");
		return (3);
	}
	pid = fork();
	if (pid < 0)
	{
		fprintf(stderr, "Process doesn't exist\n");
		return (-1);
	}
	if (pid > 0)
	{
		wait(&status);
	}
	else if (pid == 0)
	{
		execve(exe_path, cmd_arr, environ)
	}
	free(exe_path);
	return (0);
}
