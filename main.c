#include "shell.h"
/**
* main - carries out the read, execute then print output loop
* @ac: argument count
* @av: argument vector
* Return: 0
*/
int main(int ac, char **av)
{
	char *command, **tokens;
	unsigned int i;
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
		if (command[0] == '\0' || _strcmp(command, "\n") == 0)
		{
			free(command);
			continue;
		}

		/* if the user entered exit end the loop */
		if (_strcmp(command, "exit\n") == 0)
		{
			free(command);
			break;
		}
<<<<<<< HEAD
=======
		if (_strcmp(command, "env\n") == 0)
                {
                        print_env();
                        break;
                }

>>>>>>> trial
		/* tokenize the string */
		tokens = tokenizer(command);
		/*to print array  */
		for (i = 0; tokens && tokens[i]; i++)
<<<<<<< HEAD
			printf("%s\n", tokens[i]);
=======
		{
			print_s(tokens[i]);
			_putchar('\n');
		}
>>>>>>> trial
		/* preventing memory leaks */
		free(command);
		free(tokens);
	}
	return (0);
}
