#include "shell.h"

/**
* read_command - reads the user entered command
*
* Return: pointer to command
*/
char *read_command(void)
{
	char *line = NULL;
	char *command = NULL;
	char *ptr = NULL;
	size_t len = 0;
	ssize_t linesize = 0;
	char ptrlen = 0;
	/**
	 *  using getline read user input
	 * and store num of chars in line
	 *as long as the line is not -1 it continues
	 */
	while ((linesize = getline(&line, &len, stdin)) != -1)
	{
		/**
		 *  if comand is null allocate space equal to
		 *  number of chars read + 1 for NULL
		 *  if not null reallocate the space to comand inside
		 */
		if (!command)
			command = malloc(linesize + 1);
		else
		{
			ptr = realloc(command, linesize + ptrlen + 1);
			if (ptr)
				command = ptr;
			else
			{
				/* if the allocation didnt work free it */
				free(command);
				command = NULL;
			}
		}

		if (!command)
		{
			perror("Error: ");
			return (NULL);
		}

		strcpy(command + ptrlen, line);

		/* if the last line is new line */
		if (line[linesize - 1] == '\n')
		{
			if (linesize == 1 || line[linesize - 2] != '\\')
				return (command);
			/* dont touch it */
			command[ptrlen + linesize - 2] = '\0';
			linesize -= 2;
			prompt2();
		}

		ptrlen += linesize;
	}

	return (command);
}
