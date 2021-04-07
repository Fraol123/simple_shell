#include "shell.h"


/**
 * tokenizer - tokenizes a string
 * @command: user entered command
 * Return: array of strings
 */
char **tokenizer(char *command)
{
	size_t pos = 0;
        size_t count = 10;
	char *token = strtok(command, " ,\n\t\r;");
	/* we are accepting array */
	char **tokens = malloc(sizeof(char *) * count);

	while (token != NULL)
	{
		tokens[pos] = token;
		pos++;
		/* if count is greter than 10 */
		if (pos == count)
		{
			tokens = reallocate(tokens, &count);
			
		}
		token = strtok(NULL, " ");
	}
	tokens[pos] = NULL;
	return (tokens);
}
