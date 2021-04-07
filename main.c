#include "shell.h"

/**
* main - carries out the read, execute then print output loop
* @ac: argument count
* @av: argument vector
*
* Return: 0
*/
int main(int ac, char **av)
{
	char *command, **tokens;
	(void)ac;
	(void)av;

	while (1)
	{
		/* prompt the user to enter a command */
		prompt1();

		/* read the command and store it */
		command = read_command();

		/* if command is empty exit with success */
		if (!command)
			exit(EXIT_SUCCESS);

		/* if user entered a newline or the command is null skip this iteration */
		if (command[0] == '\0' || strcmp(command, "\n") == 0)
		{
			free(command);
			continue;
		}

		/* if the user entered exit end the loop */
		if (strcmp(command, "exit\n") == 0)
		{
			free(command);
			break;
		}

		/* tokenize the string */
		tokens = tokenizer(command);

		/* for now just print the entered command */
		printf("%s\n", command);

		/* preventing memory leaks */
		free(command);
		free(tokens);
	}
	return (0);
}
