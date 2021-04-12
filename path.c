#include "shell.h"

/**
* find_path - finds the path of a function based on program name
* @name: name of program
*
* Return: absolute path to program
*/
char *find_path(char *name)
{
	int x;

	for (x = 0; environ[x] != NULL; x++)
	{
		if (strcmp(environ[x], name) == 0)
			break;
		else if (environ[x + 1] == NULL)
			perror("find path");
	}
	return (environ[x]);
}
