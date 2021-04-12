#include "shell.h"

/**
* execution - executes commands entered by users
* @args: tokenized input
*
* Return: 0
*/
int execution(char **args)
{
	pid_t child_pid;
	int status;
	char *new_comm = "/bin/";
	char *envp[] = {"PATH=/bin", NULL};

	child_pid = fork();

	if (child_pid == 0)
	{
		if (_strstr(args[0], new_comm))
		{
			if (execve(args[0], args, envp) == -1)
				exit(EXIT_FAILURE);
			printf("%s\n", args[0]);
		}
		if (!(_strstr(args[0], new_comm)))
		{
			_strcat(new_comm, args[0]);
			if (execve(new_comm, args, envp) == -1)
				exit(EXIT_FAILURE);
			printf("%s\n", new_comm);
		}
	}
	else
	{
		wait(&status);
	}
	return (0);
}
