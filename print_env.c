#include "shell.h"

/**
* print_env - prints the environment string to stdout
*
* Return: 0
*/
int print_env(void)
{
	int x;

	for (x = 0; environ[x] != NULL; x++)
	{
		write(STDOUT_FILENO, environ[x], strlen(environ[x]));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
