#include "shell.h"

/**
* tokenizer - tokenizes a string
* @command: user entered command
* Return: array of strings
*/
char **tokenizer(char *command)
{
	char *token = strtok(command, " ,\n\t\r;");
	char **tokens = malloc(sizeof(char) * strlen(command + 1));
	int pos = 0;

	while (token != NULL)
	{
		tokens[pos] = token;
		pos++;
		token = strtok(NULL, " ");
	}
	tokens[pos] = NULL;
	return (tokens);
}
