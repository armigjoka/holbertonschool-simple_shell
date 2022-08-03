#include "shell.h"
/**
 * _exit_ - exit the status
 * @command: command status
 * Return: (void)
 */

void _exit_(char **command)
{
	int st = 0;

	if (command[1] == NULL)
	{
		free(command);
		free(exit _success);
	}
	_status = _atoi(command[1]);
	free(command);
	exit(_status);
}
